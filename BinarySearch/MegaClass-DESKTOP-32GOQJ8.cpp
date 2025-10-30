// Sqrt with precison;

// first question to smjh le aise hi hai without precison isko sahi s dekh;

#include <iostream>
using namespace std;

int getMinimumValue(int target, int ansIndex){
    int s = 0;
    int e = 63;
    int mid = s + (e-s)/2;

    while( s <= e){
        int prod = mid*mid;

        if(prod == target){
            return mid;
        }
        else if(prod > target){
            e = mid-1;
        }
        else{
            // iska matlb ye hai ki prod chota hai target s!;;
            s = mid + 1;
            ansIndex = mid;
        }
        mid = s + (e-s)/2;
    }
    return ansIndex;
}

int main(){
     int target = 63;
      int ansIndex = -1;
      
      int ans = getMinimumValue(target, ansIndex);

      cout << ans << " ";

    return 0;
}


// with precision wala bhi kar liyo ek bar acche s okkh!...;












// 29. Leetcode question Divide Two intergers;

