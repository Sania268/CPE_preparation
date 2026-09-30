#include <iostream>
#include <string>
using namespace std;

int main () {
  string input;

  string row1 = "QWERTYUIOP[]\\";
  string row2 = "ASDFGHJKL;'";
  string row3 = "ZXCVBNM,./";

  while (getline(cin, input)) {
    for (int i = 0; i < input.length(); i++) {
      char c = input[i];
      if (row1.find(c) != string::npos) {
        cout << row1[row1.find(c) - 1];
      }
      else if (row2.find(c) != string::npos) {
        cout << row2[row2.find(c) - 1];
      }
      else if (row3.find(c) != string::npos) {
        cout << row3[row3.find(c) - 1];
      }
      else {
        cout << c;
      }
    }

cout << endl;
    
  } 
  return 0;
}
