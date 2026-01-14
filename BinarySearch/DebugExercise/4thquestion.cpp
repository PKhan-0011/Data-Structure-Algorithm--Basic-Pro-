//Debug the code. A peak element is an element that is strictly greater than its neighbors. Find the peak element.

#include <iostream>
using namespace std;
#include <vector>

int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        int low = 0;
        int high = n-1;
        while(low < high){
            int mid = (low + high) >> 1;
            if(nums[mid] >= nums[mid+1]){
                high = mid;
            }
            else{
                low = mid + 1;
            }
             return mid;
        }
    }
