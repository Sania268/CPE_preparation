#include <iostream>
using namespace std;

int main () {
    int T;
    cin >> T;
    // N is the numebr of days
    //P is the number of political parties
    // h[100] to store the hartal parameter of each party
    while (T--) { 
        int N, P;
        cin >> N >> P;
    
        int h[100];
        for (int i = 0; i < P; i++) {
            cin >> h[i];
        }
        
        int lost = 0;
        for (int day = 1; day <= N; day++) {
            if (day % 7 == 6 || day % 7 == 0) {
                continue;
            }
                
                for (int i = 0; i < P; i++) {
                    if (day % h[i] == 0) {
                        lost++;
                        break;
                    }
                }
            }
            
            cout << lost << endl;
        
    }
    return 0;
}
