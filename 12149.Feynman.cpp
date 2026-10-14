#include <iostream>
using namespace std;

int main () {
    // The pattern is n = 1^2 + 2^2+ ...n^2;
    int n;
        while (cin >> n && n != 0) {
            int sum = 0;
            for (int i = 1; i <= n; i++) {
                sum += i * i;
            }
            cout << sum << endl;
        }
        
    return 0;
}
