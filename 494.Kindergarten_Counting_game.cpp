#include <iostream>
#include <string>
using namespace std;

int main () {
    char currentChar;
    int currentIsLetter, previousIsLetter,count;
    
    while (cin.get(currentChar)) {
        previousIsLetter = 0;
        count = 0;
        
        while (currentChar != '\n') {
            
            if ('A' <= currentChar && currentChar <= 'Z' || 
            'a' <= currentChar && currentChar <= 'z') {
                currentIsLetter = 1;
            }
            else {
                currentIsLetter = 0;
            }
            if (currentIsLetter == 1 && previousIsLetter == 0) {
            count++;
            
            }
                previousIsLetter = currentIsLetter;
                 cin.get(currentChar);
        }
        cout << count << endl;
    }
    
    return 0;
}
