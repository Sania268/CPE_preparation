#include <iostream>
using namespace std;

int main () {
    
    int T;
    cin >> T;
    cin.ignore();
    string keyboard = "1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
    
    while (T--) {
        string words;
        getline (cin,words);
        
       for (int i = 0; i < words.length(); i++) {
           char currentChar = words[i];
           if (currentChar == ' ') {
               cout << ' ';
           }
           else {
               int position = keyboard.find(currentChar);
               cout << keyboard[position - 2];
           }
       }
       cout << endl;
        
    }
    
    
    return 0;
}
