//Debug the code. [F](https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/)ind minimum in rotated sorted array. (Sorting was in ascending order).
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