//560. Subarray Sum Equals K
// agar question m sum == k aur sum%k == 0 bolega to hamm sum-k and hashmap wali bat chit lagaunga okkh!..

#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;


class Solution {
     public: 
      int subArraySum(vector<int> &nums, int k ){
          unordered_map<int, int> map;
          map[0] = 1;

          int count = 0;
          int sum = 0;

          for(int i = 0; i<nums.size(); i++){
                  sum += nums[i];

                  if(map.find(sum - k) != map.end()){
                       count += map[sum-k];
                  }

                  map[sum]++;
          }
        return count;
      }
};