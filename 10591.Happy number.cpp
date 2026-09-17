#include <iostream>
#include <set>
using namespace std;

int main() {
    int T, n, cas = 1;
    cin >> T;

    while (T--) {
        set<int> all;

        cin >> n;
        int original = n;

        while (n != 1) {
            int sum = 0;

            // If we see the same number again, we are in a cycle.
            if (all.count(n))
                break;

            // Remember this number.
            all.insert(n);

            // Separate the digits and calculate the sum of their squares.
            while (n > 0) {
                int digit = n % 10;
                sum += digit * digit;
                n /= 10;
            }

            // Use the new sum as the next number.
            n = sum;
        }

        // n == 1 means the sequence reached 1.
        if (n == 1) {
            cout << "Case #" << cas << ": "
                 << original << " is a Happy number." << endl;
        }
        else {
            cout << "Case #" << cas << ": "
                 << original << " is an Unhappy number." << endl;
        }

        cas++;
    }

    return 0;
}
