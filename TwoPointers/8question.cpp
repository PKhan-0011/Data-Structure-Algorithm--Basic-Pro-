// 713, Subarray product less than k 
// ye teen tarikho s ho skta hai like first one is O(n2)m hoga 
// 2 pointers s ho skta hai 
// 3rd sliding window s bhi ho hi jayega ye okkh!.

#include <iostream>
using namespace std;
#include <vector>

class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        // brute force nikl sabse pehle
        // means yha p pehle sara subArray calculate kar le okkh!.   
          int count = 0;        
        for(int i = 0; i<nums.size(); i++){
                 int product = 1;
             for(int j = i; j<nums.size(); j++){
                   // yha p abb subArray niklega okkh!..
                    product *= nums[j];

                    if(product < k){
                        count++;
                    }
                    else{
                        break;
                    }
             }
        }
        return count;
    }
};

// ye same question mera two pointers s bhi ho skta hai okkh!..

class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        // brute force nikl sabse pehle
        // means yha p pehle sara subArray calculate kar le okkh!.   
          int count = 0;
          int product = 1;
          int j = 0;        
        for(int i = 0; i<nums.size(); i++){
                product *= nums[j];

                if(product < k){
                       count++;
                       j++;
                }
                else{
                    break;
                }
        }
        return count;
    }
};
