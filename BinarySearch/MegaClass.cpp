// Sqrt with precison;

// 63 ka answer 7.93256342 aisa kuh ana chaiye kar k dekh!..


#include <iostream>
#include <stdio.h>
using namespace std;

double getPrecisionValue(int value){
      double s = 0;
      double e = value;
      double ans = 0.001;
      while((e-s) >= 0.00001){
          double mid = (s + e)/2;

          if(mid*mid <= value){
             ans = mid;
              s = mid;
          }
          else {
             e = mid;
          }
      }
      return ans;
}

int main () {
     int value = 63;
     double ans2 = getPrecisionValue(value);
     printf("precision upto 8th term: %.8f\n", ans2);

     cout << ans2 << " ";

     return 0;
}

// 2nd quetion ki bat agar karenge to usme!..
// divident divisor wala question ayega okkh!..

#include <iostream>
using namespace std;

int getQuoitent(int divident, int divisor) {
         
}

int main() {
    int divident = 46;
    int divisor = 2;
    
    // yha p hamm quotient ko hi mid bol rhe hai okh!.
    int ans = getQuoitent(divident, divisor);
    cout << ans << " ";

    return 0;
}
