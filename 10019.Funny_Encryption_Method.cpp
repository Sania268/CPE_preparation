#include <iostream>
using namespace std;


int main () {
    
    int T;
    cin >> T;
    int ones[] = {0, 1, 1, 2, 1, 2, 2, 3, 1, 2};
    
    while (T--) {
        
       int count1 = 0;
       int count2 = 0;
       
        int n;
        cin >> n;
        
        int temp = n;
        
        while (temp > 0) {
            int bit = temp % 2;
            if (bit == 1) {
                count1++;
            }
            
            temp /= 2;
        }
        
        temp = n;
       
       while (temp > 0) {
           int digit = temp % 10;
           count2 += ones[digit];
           temp /= 10;
       }
        cout << count1 << " "<< count2 << endl;
        
    }
    return 0;
}
