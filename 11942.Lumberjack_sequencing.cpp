#include <iostream>
using namespace std;
int main () {
    int N;
    cin >> N;
    int a[10];

    cout << "Lumberjacks:" << endl;
    while (N--) {

    // 1. Read 10 numbers
    for (int i = 0; i < 10; i++) {
        cin >> a[i];
    }

    bool ordered = true;

    // 2. Determine direction
    if (a[0] < a[1] ) {
        // increasing
        for (int i = 0; i < 9; i++) {
            if (a[i] >= a[i + 1]) {
                ordered = false;
            }
        }
    }
    else if (a[0] > a[1]) {
        // decreasing
        for (int i = 0; i < 9; i++) {
            if (a[i] <= a[i + 1]) {
                ordered = false;
            }
        }
    }

    else {
        // equal → unordered
        ordered = false;
    }

    // 3. Print result
    if (ordered) {
        cout << "Ordered" << endl;
    }
    else {
        cout << "Unordered" << endl;
    }
}
    return 0;
}
