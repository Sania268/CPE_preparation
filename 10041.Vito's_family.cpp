#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main () {
    
    int T, n;
    cin >> T;
    while (T--) {
        cin >> n; // the number of relatives
        vector <int> v(n); // streets
        
        // read the vectors
        for (int i = 0; i < v.size(); i++) {
            cin >> v[i];
            
        }
         //sort the vectors
            sort(v.begin(), v.end());
            // Find the median
            
                int median = v[n/2];
            
            //calculate the distance
            int dis = 0;
            for (int i = 0; i < v.size(); i++) {
                dis += abs(v[i] - median);
            }
            
            cout << dis << endl;
            
    }
    return 0;
}
