#include <iostream>

using namespace std;

// e = empty bottles you already have.
// f = additional empty bottles you find.
// c = empty bottles required for one soda.
int main () {
    
    int N;
    cin >> N;
    
    while (N--) {
        int e, f, c;
        cin >> e >> f >> c;
        int empty = e + f;
        int total = 0;
        
        while (empty >= c) {
            int sodas = empty / c;
            total += sodas;
            // Update empty bottles
            empty = (empty % c) + sodas;
        }
        
        cout << total << endl;
        
    }
    return 0;
}
