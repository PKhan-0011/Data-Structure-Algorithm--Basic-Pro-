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

//int main () {
   // vector<int> nums; // ye ek array hai empty okkh!..

    // nums.push_back(-1);
    // nums.push_back(0);
    // nums.push_back(3);
    // nums.push_back(5);
    // nums.push_back(9);
    // nums.push_back(12);
//    nums.push_back(5); 
    
//     int n = nums.size();
//     int target = 5;

//     int value = getTarget(nums, n, target);

//     cout << value << " ";

//     return 0;
//}

// agar maine kahi p return kar diiya hai to wo pura function k bahar chla jaeyga ye dhyan rakhio okkh!>.
// but agar maine break kiyya hai to wo only loop k bhaar jayega!>.


// 2nd question find target 30 an array- 100, 90, 80,70,60,50,40,30,20,10;

// bool getTargetAgain(int arr[], int size, int target){
//      int s = 0;
//      int e = size-1;

//      while(s <= e){
//         int mid = s + (e-s/2);

//         if(arr[mid] == target){
//             return true;
//         }
//         else if(arr[mid] > target){
//             // bcz yye mera decresing order hai okkh!>.
//               s = mid + 1;
//         }
//         else {
//              e = mid -1;
//         }
//      }
//      return false;
// }

// int main() {
//     int arr[] = {100, 90, 80,70,60,50,40,30,20,10};
//     int size = 10;
//     int target = 30;
    
//     bool ans = getTargetAgain(arr,size, target);
    
//     if(ans){
//          cout << "value present hai mera okkh!" << " ";
//     }
//     else {
//          cout << "value not present in given array" << " ";
//     }
//     return 0;
// }

// first occurence ayega yha p okkh!..

// int getFirstValue(int arr[], int size, int target){
    
//     int s = 0;
//     int e = size-1;

//     int ans = -1;

//     while( s <= e){
//       int mid = s + (e-s)/2;
        
//       // hamne ans bhar likha hai okkh! isse andar ans upadte ho jayega and agar ppure array p traverse kar liya
//       // and targte nhi mila to wo -1 aa jayega okkh!.

//       if(arr[mid] == target){
//             ans = mid; //store ho gya okkh!,
//             e = mid - 1; // ye compuet kaerag okkh!.
//       }
//       else if (arr[mid] > target){
//          e = mid -1;
//       }
//       else {
//           s = mid + 1;
//       }
//     }
//     return ans;
// }

// int main() {
//      int arr[10] = {10,20,20,20,20,20,20,20,20,30};
//      int size = 10;
//      int target = 20;
//     int ans = getFirstValue(arr, size, target);

//     cout << ans << " ";

//      return 0;
// }

// last occurence mai bass hamm s = mid + 1; karte hai ise last compute kahenge okkh!..

int getFirstValue(int arr[], int size, int target, int &ans){
    
    int s = 0;
    int e = size-1;


    while( s <= e){
      int mid = s + (e-s)/2;
        
      // hamne ans bhar likha hai okkh! isse andar ans upadte ho jayega and agar ppure array p traverse kar liya
      // and targte nhi mila to wo -1 aa jayega okkh!.

      if(arr[mid] == target){
            ans = mid; //store ho gya okkh!,
            e = mid - 1; // ye compuet kaerag okkh!.
      }
      else if (arr[mid] > target){
         e = mid -1;
      }
      else {
          s = mid + 1;
      }
    }
    return ans;
}

int getLastValue(int arr[], int size, int target, int ans03) {
    
    int s = 0;
    int e = size-1;


    while( s <= e){
      int mid = s + (e-s)/2;
        
      // hamne ans bhar likha hai okkh! isse andar ans upadte ho jayega and agar ppure array p traverse kar liya
      // and targte nhi mila to wo -1 aa jayega okkh!.

      if(arr[mid] == target){
            ans03 = mid; //store ho gya okkh!,
            s = mid + 1; // ye compuet kaerag okkh!.
      }
      else if (arr[mid] > target){
         e = mid -1;
      }
      else {
          s = mid + 1;
      }
    }
    return ans03;
}

int main() {
     int arr[10] = {10,20,20,20,20,20,20,20,20,30};
     int size = 10;
     int target = 20;

     int ans = -1;
     int ans02 = getFirstValue(arr, size, target, ans);
      
     int ans03 = -1;
     int lastOccur = getLastValue(arr, size, target, ans03);

    cout << (lastOccur - ans02) + 1 << " ";

     return 0;
}

// Missing Number(268 Leetcode);
class Solution {
public:
    int missingNumber(vector<int>& nums) {
         
         sort(nums.begin(), nums.end());

        int ans = -1;
        int s = 0;
        int e = nums.size() -1 ;

        while(s <= e){
             int mid = s + (e-s)/2;

             if(nums[mid] - mid == 0){
                  s = mid + 1;
             }
             else if(nums[mid] - mid == 1){
                  ans = mid;;
                  e = mid -1;
             }
        }
        if(ans == -1){
                return nums.size();
             }
        return ans;
    }
};

// iisme around 7-8-9 question hai like!..

// binary Search,
// Decreaseing wala binary Search.
// BinarySearch store and compute wala;
// first Occurence of an array (storre and compute);
// last Occurence of an array (store and copute wala hai ye bhi ) bass s = mid+1 karte hai aage jjane k liye okkh!..
// total Occurence of an array 
// first and last Occurnec of an array. 
// number between first and last occurence..
// Missing number.. T.c(O(nlogn)) + log(n);