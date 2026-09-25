#include<iostream>
using namespace std;

int main () {
    int n;
    
    while ( cin >> n && n != 0) {
    
        while (n >= 10) {
            int sum = 0;
            
            while (n > 0) {
                sum += n % 10;
                n /= 10;
            }
            n = sum;
        }
        cout <<  n << endl;
    }
    return 0;
}
