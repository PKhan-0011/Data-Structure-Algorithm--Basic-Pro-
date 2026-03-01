// 3Sum without dublicates!..

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
         sort(nums.begin(), nums.end());
         vector<vector<int>> ans2;
         for(int i = 0; i<nums.size()-2; i++){
             if(i > 0 && nums[i] == nums[i-1]){
                 continue;
             }

             int target = -1*nums[i];
             int left = i+1;
             int right = nums.size()-1;

             while(left < right){
                   int sum = nums[left] + nums[right];
                   if(sum == target){ 

                        ans2.push_back({nums[i], nums[left], nums[right]});
                        left++;
                        right--;         

                       while(left < right    &&nums[left] == nums[left-1]){
                            left++;
                       }

                       while(right > right && nums[right+1] == nums[right]){
                          right--;
                       }
                   }
                   else if(sum > target){
                        right--;
                   }
                   else{
                    left++;
                   }
             }
         }
         return ans2;
    }
};