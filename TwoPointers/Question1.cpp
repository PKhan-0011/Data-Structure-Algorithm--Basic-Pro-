//1 Two Sum II - Input Array Is Sorted
// Input: numbers = [2,7,11,15], target = 9
// Output: [1,2]


#include <iostream>
#include <vector>
using namespace std;


  vector<int> twoSum(vector<int>& arr, int target, int size){
         // two pointer wala question!..
         int i = 0;
         int j = size-1;
          vector<int> newArr;
         while(j > i){
             if(arr[j] + arr[i] == target){
                  newArr.push_back(i);
                  newArr.push_back(j);
                  i++;
                  j--;
             }
             else if(arr[j] + arr[i] > target){
                    j--;
             }
             else {
                 i++;
             }
         }
         return newArr;
  }

  int main(){
    vector<int> arr = {2,7,11,15};
    int size = 4;
    int target = 9;
     
    vector<int> ans = twoSum(arr, size, target);

    return 0;
  }

//2. segerate 0's and 1's!..
//Input: arr[] = [0, 0, 1, 1, 0]
//Output: [0, 0, 0, 1, 1]

class Solution {
  public:
    void segregate0and1(vector<int> &arr) {
        // code here
          // sort(arr.begin(), arr.end());
          int i = 0;
          int j = arr.size()-1;
          
          while(j > i){
              int ans = arr[i];
              int ans2 = arr[j];
              
              if(ans == 0 && ans2 == 1){
                   i++;
                   j--;
              }
              else if(ans == 0){
                  i++;
              }
              else if(ans2 == 1){
                   j--;
              }
              else{
                  swap(arr[i], arr[j]);
                  i++;
                  j--;
              }
          }
    }
};


  //3rd question!..
  //26. Remove Duplicates from Sorted Array
  // [1,1,2], output = 2;
  
  class Solution {
    public:
    int RemoveDuplicates(vector<int>& numbers, int target) {
       int i = 0;
       int j = 1;
       int len = 1;

       while(j < numbers.size()){
             if(numbers[j] == numbers[i]){
                 j++;
             }
             else {
                 i++;
                 numbers[i] = numbers[j];
                 j++;
                 len++;
             }
       }
       return len;
    } 
  };


//4. 977. Squares of a Sorted Array// square of a sorted array!..
//Input: nums = [-4,-1,0,3,10]
//Output: [0,1,9,16,100]

class Solution{
    public:
    int getSquareAndSortedArray(int arr[], int size){
      int  i = 0;
      int j = size-1;
      vector<int> ans(size);
      int n = size-1;
      while(j >= i){
          if(abs(arr[i]) > abs(arr[j])){
              ans[n] = arr[i]*arr[i];
              i++;
          }else{
              ans[n] = arr[j]*arr[j];
              j--;
          }
        n--;
      }
     // return ans;
}
}





