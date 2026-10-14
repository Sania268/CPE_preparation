#include <iostream>
#include <string>
using namespace std;

int main () {
    
   string s;
   while (cin >> s && s != "0") {
       
       int sum = 0;
   // Calculate the sum of the original digits
   for (int i = 0; i < s.size(); i++) {
       sum += s[i] - '0';
   }
   // Check whether the number is a multiple of 9
   if (sum % 9 != 0) {
       cout << s << " is not a multiple of 9." << endl;
   }
   else {
       int degree = 1;
   
   // Keep adding digits until we reach one digit
   while (sum >= 10) {
       int newSum = 0;
       
       while (sum > 0) {
           newSum += sum % 10;
           sum /= 10;
           
       }
       sum = newSum;
       degree++;
       }
         cout << s << " is a multiple of 9 and has 9-degree "<< degree << "." << endl;
           
       }
   }
    return 0;
}
