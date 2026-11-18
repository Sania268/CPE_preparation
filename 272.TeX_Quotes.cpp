

#include <iostream>
#include <string>
using namespace std;

int main () {
    
    string line;
    bool opening = true;
    
    while (getline(cin, line)) {
        
        for (int i = 0; i < line.length(); i++) {
            
            if(line[i] == '"') {
                if (opening) {
                    cout << "``";
                }
                else {
                    cout << "''" ;
                }
                opening = !opening;
            }
            else {
                cout << line[i];
            }
        }
        cout << endl;
    }
    
    return 0;
}
