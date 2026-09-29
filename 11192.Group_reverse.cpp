#include <iostream>
using namespace std;

int main () {
      int G;
      string s;
    while (cin >> G >> s && G > 0) {
            int groupSize = s.length() / G;
            for (int i = 0; i < s.length(); i+= groupSize) {
                string segment = s.substr(i,groupSize);
                cout << string(segment.rbegin(), segment.rend());

                
                }
                cout << endl;
            }
            return 0;
                
}
