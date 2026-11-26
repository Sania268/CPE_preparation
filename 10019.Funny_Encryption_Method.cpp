#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // 在這裡撰寫程式碼
     int N;
     cin >> N;

    while (N--) {
        string number;
        cin >> number;

        int n = stoi(number);
        int count1 = 0;

        // First: interpret the number as decimal
        while (n > 0) {
            int digit = n % 2;

            if (digit == 1) {
                count1++;
            }

            n /= 2;
        }

        int count2 = 0;

        // Second: interpret the digits as hexadecimal
        for (int i = 0; i < number.length(); i++) {
            int digit = number[i] - '0';

            while (digit > 0) {
                if (digit % 2 == 1) {
                    count2++;
                }

                digit /= 2;
            }
        }

        cout << count1 << " " << count2 << endl;
    }

    return 0;
}
