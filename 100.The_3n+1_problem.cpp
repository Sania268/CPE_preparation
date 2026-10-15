#include <iostream>
using namespace std;

int main () {
    int i, j;
    
    while (cin >> i >> j) {
        int start = i;
        int end = j;
      
        // Check whether i is the starting index or not
        if (i > j) {
            start = j;
            end = i;
        }
        
        int maxCycle = 0;
        
        for (int num = start; num <= end; num++) {
            int n = num;
            int count = 1;
            
            while (n != 1) {
                if (n % 2 != 0) {
                    n = 3 * n + 1;
                }
                else {
                    n = n / 2;
                }
                count++;
            }
            if (count > maxCycle) {
                maxCycle = count;
            }
        }
        cout << i <<" "<< j << " "<< maxCycle << endl; 
    }
    return 0;
}
