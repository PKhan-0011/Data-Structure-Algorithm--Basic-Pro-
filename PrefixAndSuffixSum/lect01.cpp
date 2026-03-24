// prefix sum!..

#include <iostream>
#include <vector>
using namespace std;

void PrefixSum(vector<int> arr, int size){
      vector<int> PrefixArray(size);
      PrefixArray[0] = arr[0];
      for(int i = 1; i<size; i++){
          PrefixArray[i] = PrefixArray[i-1] + arr[i];
      }
      for(int i = 0; i< PrefixArray.size(); i++) {
           cout << PrefixArray[i] << " ";
      }   
};

void SuffixSum(vector<int> arr, int size){
    vector<int> suffixArray(size);
    suffixArray[size-1] = arr[size-1];

    for(int i = size-2; i >= 0; i--){
         suffixArray[i] = suffixArray[i+1] + arr[i];
    }

     for(int i = 0; i< suffixArray.size(); i++) {
           cout << suffixArray[i] << " ";
      }   
}


int main(){
    vector<int> arr = {5,6,7,8,9};
    int size = arr.size();

    PrefixSum(arr, size);
    SuffixSum(arr, size);
    
//    CompareArray(arr, size);

    return 0;
}

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        // do extra space le rha hu mai isme that's why 
        // toodha bekar apprach hai ye okkh!..
        
        int n = nums.size();

        vector<int> prefix(n);
        prefix[0] = nums[0];
        vector<int> suffix(n);
        suffix[n-1] = nums[n-1];

         for(int i = 1; i<nums.size(); i++){
              prefix[i] = prefix[i-1] + nums[i];
         }

         for(int i = n-2; i>=0; i--){
              suffix[i] = suffix[i+1] + nums[i]; 
         } 

         // ek aur loop lagega yha p like jisse mai compare karunga suffix and prefix ki ki wo barabar hai bhi ya nhai okkh!..
         for(int i = 0; i<n; i++){
              if(prefix[i] == suffix[i]){
                  return i;
              }
         }
         return -1;
    }
};

// ye above wala optimize nahi hai okkh!..
// isko optimize tughe karna hai like kcuh idea leke okkh!..

#include <iostream>
using namespace std;


class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        // do extra space le rha hu mai isme that's why 
        // toodha bekar apprach hai ye okkh!..
        int n = nums.size();

        int sum = 0;
        for(int i = 0; i<nums.size(); i++){
              sum += nums[i];
        }
        
        //yha s sum around 32 aa gyi hai ookkh!..
        
        int left = 0;
        for(int i = 0; i< nums.size(); i++){
              int right = sum - nums[i] - left;
              if(nums[right] == nums[left]){
                return i;
              }
              left += nums[i];
        }
          return -1;      
    }
};