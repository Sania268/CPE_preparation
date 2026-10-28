#include <iostream>
#include <cmath>

using namespace std;


int  main () {
  long long N, P;
  long long result = 0;

  while (cin >> N >> P) {
    result = abs(N - P);
    cout << result << endl;
  }
  return 0;
}
