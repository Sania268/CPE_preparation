#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


int main () {
    
    int n;
    
   while (cin >> n && n != 0) {
       
       int count = 0;
       
       string binary = "";
       
       // keep the original number available if needed
      int original = n;
      
      //convert the number to binary 
      
      while (n > 0) {
          
          int digit = n % 2;
          binary += to_string(digit);
      
      
      // Count the 1 bits
      if (digit == 1) {
         count++;
      }
      
      // Remove the last binary bit
      n /= 2;
      }
      
      // The bits were collected backward, so reverse them
      reverse(binary.begin(), binary.end());
       
       cout << "The parity of "<< binary << " is " << count << " (mod 2).";
   }
    return 0;
}
