#include <iostream>
using namespace std;

int main () {
    int N;
    cin >> N;
    while (N--) {
        
        int P;
        cin >> P;
        
        // To count the number of iterations
        int count = 0;
        
        while (true) {
        // We keep the original number because we will need it letter    
        int original = P;
        // We copy the number for the iterations
        int temp = P;
        
        int reverse = 0;
        
        while (temp > 0) {
            int digit = temp % 10;
            reverse = reverse * 10 + digit;
            temp /= 10;
        }
        
        //If it's already a palindrome, stop it
        if (original == reverse) {
            break;
        }
        // If not add the original number to the reverse number 
        P = original + reverse;
        count++;
        
    }
    
    cout << count << " "<< P << endl;
    
    }
    return 0;
}
