#include <iostream>
using namespace std;

int main () {

int n;
cin >> n;

for (int i = 0; i < n; i++) {
    
    int s, d;
    cin >> s >> d;

    // x + y = s;
    // x - y = d;
    int x = 0, y = 0;

    // check whether s >= d and s is even

    if (s >= d && (s + d) % 2 == 0) {
    x = (s + d) / 2;
    y = (s - d) / 2;
    
    cout << x << " " << y << endl;
    }
    else {
        cout << "impossible" << endl;
    }

}


return 0;
}
