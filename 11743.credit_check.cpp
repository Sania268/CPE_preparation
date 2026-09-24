#include<iostream>
#include<string>
using namespace std;

int main () {

    int N;
    cin >> N;
    int cred[16];

    while (N--) {
        int a, b = 0;

    for (int i = 0; i < 4; i++) {

    cin >> a;
    cred[i * 4 + 3] = a % 10;
     a /= 10;

     cred[i * 4 + 2] = a % 10;
     a /= 10;

     cred[i * 4 + 1] = a % 10;
     a /= 10;

      cred[i * 4] = a % 10;
        }


        // Go through positions 0,2,4,6,8,10... to double them

        for (int i = 0; i < 16; i += 2) {

            a = cred[i] * 2;

            b = b + a % 10;
            a /= 10;

            b = b + a % 10;
            }

            for (int i = 1; i < 16; i+=2) {
                b = b + cred[i];
            } 



            if (b % 10 != 0) {
                cout << "Invalid" << endl;
            } else {
                cout << "Valid" << endl;
            }
        }
        
        return 0;
    }

}
