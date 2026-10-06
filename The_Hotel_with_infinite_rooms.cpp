#include <iostream>
using namespace std;

int main () {
    long long S, D;
    long long area;
    
    while (cin >> S >> D) {
        for (int i = 0; ; i++) {
            area = (S + (S + 1) * (i + 1) / 2);
            if (area >= D) {
                cout << S + i << endl;
                break;
            }
        }
    }
    
    return 0;
}
