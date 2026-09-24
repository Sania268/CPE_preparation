#include <iostream>
using namespace std;
int main () {

  int a[20] = {0};
  a[0] = 1;
  a[1] = 2;

  for (int i = 2; i < 20; i++) {
    a[i] = a[i - 1] * 2;
  }

  int cas = 1;
  int n;

  while (cin >> n) {
    for (int i = 0; i < n; i++) {
      if (a[i] >= n) {
        cout << "Case " << cas << ": "<< i << endl;
        cas++;
        break;
      }
    }
  }
  
  
return 0;
}
