#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // 在這裡撰寫程式碼
    string number;
    
    while (cin >> number && number != "0") {
        int sum1 = 0;
        int sum2 = 0;
        
        for (int i = 0; i < number.length(); i++) {
            int digit = number[i] - '0';
           
           if (i % 2 == 0) {
               sum1 += digit  ;
           }
           else {
               sum2 += digit;
           }
        }
        
        int difference = sum1 - sum2;
        
        if (difference % 11 == 0) {
            cout << number << " is a multiple of 11."<< endl;
        }
        else {
            cout << number << " is not a multiple of 11."<< endl;
        }
    }
    return 0;
}
