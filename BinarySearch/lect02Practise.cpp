// peak element!..

// pivot index..

// squrt(x);

#include <iostream>
using namespace std;

int getRootValue(int x){
      // mughe yha p like x ki root indexes nikalne hai okkh!..
      int s = 0;
      int e = x;
      int ans = -1;
      while(s <= e){
          long long int mid = s + (e-s)/2;

          if(mid * mid > x){
              // hamm value k bahut aage hai!..
              e = mid - 1;
          }
          else {
               ans = mid;
              s = mid + 1;

          }
      }
      return ans;
}

int main() {
     int x = 10;

     int ans = getRootValue(x);
     
     cout << ans << " ";

     return 0;
}

