#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    map<string, int> countries;
    string country, name;

    for (int i = 0; i < n; i++) {
        cin >> country;
        getline(cin, name);

        countries[country]++;
    }

    for (auto item : countries) {
        cout << item.first << " " << item.second << endl;
    }

    return 0;
}
