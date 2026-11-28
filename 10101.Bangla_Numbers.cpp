#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>

using namespace std;

    // 在這裡撰寫程式碼
    void bangla(long long n) {
   if (n >= 10000000) {
        bangla(n / 10000000);
        cout << " kuti";
        n = n % 10000000;
   }
   
    if (n >= 100000){
        cout << " "<< n / 100000 << " lakh";
        n = n % 100000;
        }
        
        if (n >= 1000) {
            cout << " " << n / 1000 << " hajar";
        n = n % 1000; 
        }
        
         
        if (n >= 100) {
        cout << " " << n / 100 << " shata";
        n = n % 100;
        }
        
        if (n > 0) {
            cout << " " << n;
        }
    
    }

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long n;
    int caseNumber = 0;
    
    while(cin >> n) {
        cout << setw(4) << ++caseNumber << ".";
        
        if (n == 0) {
            cout << " 0";
        }
        else {
            bangla(n);
        }
        cout << endl;
    }
    
    
    return 0;
}
