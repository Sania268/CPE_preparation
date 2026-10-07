#include <iostream>
#include <cmath>
#include <algorithm>
#include <iomanip>
using namespace std;

int main () {
    
    // minuteAngle = M × 6
   // hourAngle = H × 30 + M × 0.5
   // difference = |hourAngle - minuteAngle|
   /* if difference > 180
    difference = 360 - difference
    */
    
    int H, M;
  // to print :
    char colon;
    while (cin >> H >> colon >> M) {
        
        if (H == 0 && M == 0) {
            break;
        }
        double minuteAngle = M * 6;
        double hourAngle = H * 30 + M * 0.5;
        double difference = abs (hourAngle - minuteAngle);
        if (difference > 180) {
            difference = 360 - difference;
        }
      // to print three zeroes ater the decimal point
            cout << fixed << setprecision(3) << difference << endl;
        
    }
    return 0;
}
