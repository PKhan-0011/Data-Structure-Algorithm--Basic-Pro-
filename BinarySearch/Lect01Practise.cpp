// first wala jo hai wo binary search ka hai okkh!>.

#include <iostream> 
#include <vector>
#include <algorithm>

using namespace std;

int getTarget(vector<int> &nums, int n, int target){
   // array jo normal hota hai wo pass by value hota hai okh!..
   // but in vector hamm pass by reference ppass karte hai..
   
   int s = 0;
   int e = n-1;
   while(s <= e){
        // agar in case maine andar mid define kiya hai to mughe update ki need nahi hai okkh!.

        // int ans = -1; // isko mai andar nahi likh sakta bcz ye bar bar har route p upadtet hoga and -1 s intailize ho jayega okkh! 
        int mid = s + (e-s)/2;

        if(nums[mid] == target){
              return mid;
        }
        else if (nums[mid] > target){
              e = mid-1;
        }
        else {
            s = mid + 1;
        }
   }
   return -1;
}

int main () {
    vector<int> nums; // ye ek array hai empty okkh!..

    // nums.push_back(-1);
    // nums.push_back(0);
    // nums.push_back(3);
    // nums.push_back(5);
    // nums.push_back(9);
    // nums.push_back(12);
   nums.push_back(5); 
    
    int n = nums.size();
    int target = 5;

    int value = getTarget(nums, n, target);

    cout << value << " ";

    return 0;
}

// agar maine kahi p return kar diiya hai to wo pura function k bahar chla jaeyga ye dhyan rakhio okkh!>.
// but agar maine break kiyya hai to wo only loop k bhaar jayega!>.
