 #include <iostream>
 #include <vector>
using namespace std;

int main () {
    
    int n , m;
    
    while (cin >> n >> m) {
        vector<int> result;
    
    if (m == 1) {
        cout << "Boring"<< endl;
        continue
    }
    
        
        while (n % m == 0 ) {
            
            result.push_back(n);
            
            n = n / m;
        }
            
            if (n == 1) {
                
                for (int i = 0; i < result.size(); i++) {
                   cout << result[i];
                   
                   if (i < result.size() - 1) {
                       cout << " ";
                   }
                }
                
                cout << " 1" << endl;
            }
                else {
                    cout << "Boring!"<< endl;
                }
    }
    
    return 0;
}
