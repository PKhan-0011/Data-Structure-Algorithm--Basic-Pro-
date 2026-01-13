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

// int main () {
//      int value = 63;
//      double ans2 = getPrecisionValue(value);
//      printf("precision upto 8th term: %.8f\n", ans2);

//      cout << ans2 << " ";

//      return 0;
// }

// 2nd quetion ki bat agar karenge to usme!..
// divident divisor wala question ayega okkh!..

// #include <iostream>
// using namespace std;

// int getQuoitent(int divident, int divisor) {
//         int s = 0;
//         int e = divident;
//         int ans = -1;

//         while(s <= e){
//               int mid = s + (e-s)/2;
//               if(mid* divisor <= divident){
//                   ans = mid;
//                   s = mid+1;
//               }
//               else {
//                   e = mid-1;
//               }
//         }
//         return ans;
// }

// int main() {
//     int divident = 46;
//     int divisor = 2;
    
//     // yha p hamm quotient ko hi mid bol rhe hai okh!.
//     int ans = getQuoitent(divident, divisor);
//     cout << ans << " ";

//     return 0;
// }

// precision wale bhi aa jayenge isi mai hi okkh!..

#include <iostream>
#include <algorithm>
using namespace std;

// ek bar precsion wala dekhna padega!..
int getQuoitent(int divident, int divisor) {
        double s = 0;
        double e = divident;
        double ans = -1;

        while((e-s) >= 0.0001){
              double mid = (s + e)/2;
              if(mid* divisor <= divident){
                  ans = mid;
                  s = mid+1;
              }
              else {
                  e = mid-1;
              }
        }
        return ans;
}

int main() {
    double divident = 46;
    double divisor = 2.0;
    
    // yha p hamm quotient ko hi mid bol rhe hai okh!.
    double ans = getQuoitent(divident, divisor);
    cout << ans << " ";

    return 0;
}


// KoKo eat's Banana's!..

#include <iostream>
#include <algorithm>
#include <cmath>
#include <limits.h>
using namespace std;

int getMax(int arr[], int size){
     int maxAns = INT_MIN; 
     for(int i = 0; i<size; i++){
           if(arr[i] > maxAns){
               maxAns = arr[i];
           }
     }
     return maxAns;
}

int getTotalTime(int arr[], int size, int mid){
       double totalTime = 0;
       for(int i = 0; i<size; i++){
            totalTime += ceil((arr[i]) / (double)(mid));
       }
       return totalTime;
}

int getMinimumHoursToEatAllBanana(int arr[], int size, int h){
      int s = 1;
      int e = getMax(arr, size);

      int ans = -1;

      while(s < e){
           int mid = s + (e-s)/2;
           int getTime = getTotalTime(arr, size, mid);

           if(getTime <= h){
                ans = mid;
                e = mid-1;
           }
           else {
               s = mid + 1;
           }
      }
      return ans;
} 

int main() {
      int arr[] = {3,6,7,11};
      int size = 4; 
      int h = 8;

      int ans = getMinimumHoursToEatAllBanana(arr, size, h);

      cout << ans << " ";

    return 0;
}

// Precison wale todhe tough hai unko sahi s dekh liyo okkh!...
// Precison in srt, and precision in divison and divisor.. 


// last question minimmum number of days to make buquetes..


