#include <iostream>
#include <set>
using namespace std;

int main () {
  int T, n, cas = 1;
  cin >> T;

  while (T--) {
    set<int>all;
    cin >> n;
    int original = n;

    while (n != 1) {
      int sum = 0;
      
     if (all.count(n))
      break;
      
      all.insert(n);

      while (n > 0) {
        int digit = n % 10;
        sum += digit * digit;
        n/= 10;
      }
      n = sum;
    }

    if (n == 1) {
      cout << "Cas #" << cas << ": " << original << " is a Happy number." << endl;
    }
    else {
      cout << "cas #" << cas << ": " << original << " is an Unhappy number."<< endl;
    }
    cas++;
    
  }
  return 0;
}

