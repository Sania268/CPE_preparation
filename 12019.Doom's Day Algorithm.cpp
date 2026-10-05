#include <iostream>
#include <string>
using namespace std;

int main () {
int T;
int months[] = {31, 28, 31, 30, 31, 30, 31, 31, 
               30, 31, 30, 31 };
               
               string days[] = {"Saturday", "Sunday","Monday", 
               "Tuesday", "Wednesday", "Thursday", "Friday"};
        cin >> T;
        
        while (T--) {
            int totalDays = 0;
            int day, month;
            cin >> month >> day;
            
    for (int i = 0; i < month - 1; i++) {
        totalDays += months[i];
    }
    
    totalDays += day - 1;
    int dayIndex = totalDays % 7;
    cout << days[dayIndex] << endl;
}

    return 0;
}
