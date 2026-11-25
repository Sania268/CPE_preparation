#include <iostream>


/*n / 3 gives us the number of full groups of 3 bottles we can exchange.
n % 3 gives us the bottles left over that couldn't be exchanged.
*/


using namespace std;

int main () {
    int n;
    cin >> n;
    
int total = n;

while (n >= 3) {
    int newColas = n / 3;
    total += newColas;
    
    n = (n % 3) + newColas;
}
//borrowing rules
if (n == 2) {
    total++;
}
cout << total << endl;
    return 0;
}
