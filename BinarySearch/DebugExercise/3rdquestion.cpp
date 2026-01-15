//Debug the code. [F](https://  leetcode.com/problems/find-minimum-in-rotated-sorted-array/)ind minimum in rotated sorted array. (Sorting was in ascending order).
#include <iostream>
using namespace std;
#include <vector>

int findMin(vector<int>& nums) {
        int start = 0, end = nums.size()-1, ans = start;
        while(nums[start] > nums[end]) {
            int mid = (start + end) >> 1; // riight shift chaiye yha p okk!..
            if(nums[mid] <= nums[start] && nums[mid] <= nums[end]) 
                end = mid;
            else if(nums[mid] >= nums[start] && nums[mid] >= nums[end])
                start = mid + 1;          
            else return nums[mid];
            ans = start;
        }
        return nums[ans];
    }



#include <iostream>
using namespace std;

int getPivotIndex(int arr[], int size){
    int s = 0;
    int e = size-1;

    while(s <= e){
          int mid = s + (e-s)/2;
          // yha p generally teen cases bante hai pivot naikalne k 
          // like kya pta wo usi element p khda ho like mid p hi okkh!..
          // mid > mid +1  return mid and if mid -1 > mid return mid-1 karna padega okkh!..
          if( mid + 1 < size && arr[mid] > arr[mid+1]){
                return mid;
          }

          else if (mid-1 >= 0 && arr[mid] < arr[mid-1]){
               return mid -1;
          }

          if(arr[s] > arr[mid]){
              // mai second line mai hu mughe piche jana hai okkj!.
              e = mid -1;
          }
          else {
               s = mid +1;
          }
    }
    return -1;
}

int main() {
      int arr[] = {4,5,6,7,0,1,2};
      int size = 7;
      int target = 0;
      int ans = getPivotIndex(arr, size);
       cout << ans << " ";
        
       // yha s jo pivot index hai wo 3 aa rha hai okkh!..
       
       // yha p 2 condtion banegi okkh!. first one is 
       // target jo hai wo first line mai hai ya ya fiir target jo hai wo 2nd line mai hai okkh!.

       if(target >= arr[0] && target <= arr[ans]){
            int s = 0; 
            int e = ans;
            while(s <= e){


                 int mid = s + (e-s)/2;
                  
                 if(s == e){
                      if(arr[mid] == target){
                           cout << mid << " ";
                           return mid;
                      }
                      else {
                          return -1;
                      }
                 }

                  if(arr[mid] == target){
                      cout << mid  << " ";
                       return mid;
                  }
                  else if(arr[mid] > target){
                      e = mid-1;
                  }
                  else {
                     s = mid + 1;
                  }
            }
       }

       if(target >= arr[ans+1] && target <= arr[size-1]){
             int s = ans+1;
             int e = size-1;
             while(s <= e){
                  int mid = s + (e-s)/2;

                   if(s == e){
                      if(arr[mid] == target){
                           cout << mid << " ";
                           return mid;
                      }
                      else {
                          return -1;
                      }
                 }

                  if(arr[mid] == target){
                     cout << mid << " ";
                     return mid;
                  }
                  else if(arr[mid] > target){
                       e = mid + 1;
                  }
                  else {
                     s = mid + 1;
                  }
             }
       }

      return 0;
}



