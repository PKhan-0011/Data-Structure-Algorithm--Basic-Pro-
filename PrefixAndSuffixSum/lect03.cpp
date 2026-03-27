// 974. Subarray Sums Divisible by K

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
     public: 
     int subarraysDivByK(vector<int>& nums, int k){
         unordered_map<int, int> map;
         int count = 0;
         int sum = 0;
         map[0] = 1;
         for(int i = 0; i<nums.size(); i++){
              sum += nums[i];
              int diff = sum%k;
               
              if(diff < 0){
                 diff += k;
              }

              int res = map[diff];
              count += res;
              map[diff]++;
         }
         return count;
     }
};