// max sum of subArray of size K;

#include <iostream>
#include <vector>
#include <climits>
#include <unordered_map>
using namespace std;



class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
         int low = 0;
         int high = k-1;
         int sum = 0;
         int res = INT_MIN;
         
         for(int i = 0; i<k; i++){
             sum += arr[i];
         }
         
         while(high < arr.size()){
               res = max(res, sum);
               low++;
               high++;
               
               if(high == arr.size()){
                   break;
               }
               sum = sum + arr[high] - arr[low-1];
         }
         return res;
    }
};

// leetcode!..2461. Maximum Sum of Distinct Subarrays With Length K

class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        //sliding window lagega yha bhi!..
        
        if(nums.size() < k){
            return 0;
        }

        unordered_map<int, int> map;
        long long sum = 0;
        long long maxAns = INT_MIN;
        long long low = 0;
        long long high = 0;

        while(high <nums.size()){
             // yhap high wala hota hai!..
             sum += nums[high];
             map[nums[high]]++;

             // yha p false condition ati hai!..
             while(high - low + 1 > k){
                   map[nums[low]]--;
                   if(map[nums[low]] == 0){
                       map.erase(nums[low]);
                   }
                   sum = sum - nums[low];
                   low++;
             }

             // last condtion yha p ati hai like map ki size agar k k barrabr a gyi to hi maxAns niklega okh!..
             if(high - low + 1 == k){

            if(map.size() == k){
                maxAns = max(sum, maxAns);
            }
        }
          high++;
        }
        return maxAns == INT_MIN ? 0 : maxAns;
    }
};

// mugeh bass ek case smmjh nahi aya like ki high - low + 1 > k aur map le lete hai har jagha wo kaise lete hai ye smjh nahi aya yrr!. 
// bass map.size() > k kyu lete hai aur high - low + 1 smjh nahi aya bass ki aisa kyu liya hai okkh!..

// NOTE** agar maximum subArray/subString ki bat karega to sliding window but usme distinct/non-duplicate/duplicates/reapating hai isme mughe map 
// sochna hota hai okkh!..

