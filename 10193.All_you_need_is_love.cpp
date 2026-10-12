#include <iostream>
#include <string>
using namespace std;

int binaryToDecimal (string binary) {
    int number = 0;
    for (int i = 0; i < binary.length(); i++) {
        number = number * 2 + (binary[i] - '0');
    }
    return number;
}

int gcd (int a, int b) {
    while (b != 0) {
        int remainder = a % b;
        a = b;
       b =  remainder;
    }
    return a;
}
  

int main () {
    
    int N;
    cin >> N;
    
        for (int i = 1; i <= N; i++) {
            string s1, s2;
            cin >> s1 >> s2;
            
            int number1 = binaryToDecimal(s1);
            int number2 = binaryToDecimal(s2);
            
            int result = gcd(number1, number2);
            
            cout << "Pair #" << i << ": ";
            if (result > 1) {
                cout << " All you need is love!"<< endl;
            }
            else {
                cout << " Love is not all you need!" << endl;
            }
        
    }
    return 0;
}
