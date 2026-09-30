#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;


int main () {
    string input;
    while (getline (cin, input)) { // Keep reading until the end of line
    for(int i = 0; i < input.length(); i++)  
        input[i] -= 7;
    
    for (int i = 0; i < input.length(); i++) 
        cout << input[i];
        cout << endl;
    
    
}
    
    return 0;
}


        
