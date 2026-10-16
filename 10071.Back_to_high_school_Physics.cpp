#include <iostream>
using namespace std;

int main () {
    // d = 2vt;
    int v, t;
    while (cin >> v >> t) {
        int d = 2 * (v * t);
        cout << d << endl;
    }

}
