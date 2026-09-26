#include<iostream>
#include<string>
using namespace std;

int main () {
    int T;
    cin >> T;

    while (T--) {

        string s;
        cin >> s;

        int score = 0;
        int consecutive = 0;
        
        for (int i = 0; i < s.length(); i++) {
if (s[i] =='O') {
    consecutive++;
    score += consecutive;
    }
    else if (s[i] =='X') {
        consecutive = 0;
    }
    }
     cout << score << endl;
}
    return 0;
}
