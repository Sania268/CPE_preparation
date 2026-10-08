#include <iostream>
#include <vector>
using namespace std;

int main() {

    int n, m;

    while (cin >> n >> m) {

        // Create a new vector for each test case
        vector<int> result;

        // m = 1 would cause an infinite division loop
        if (m == 1) {
            cout << "Boring!" << endl;
            continue;
        }

        // Keep dividing while the division is exact
        while (n % m == 0) {

            // Save the current value
            result.push_back(n);

            // Divide n by m
            n = n / m;
        }

        // If we reached 1, the sequence is valid
        if (n == 1) {

            // Print the stored values
            for (int i = 0; i < result.size(); i++) {

                cout << result[i];

                // Add spaces between the numbers
                if (i < result.size() - 1) {
                    cout << " ";
                }
            }

            // Print the final 1
            cout << " 1" << endl;
        }
        else {
            cout << "Boring!" << endl;
        }
    }

    return 0;
}
