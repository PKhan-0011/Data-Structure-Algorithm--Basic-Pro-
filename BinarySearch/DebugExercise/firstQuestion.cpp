#include <iostream>
#include <vector>
using namespace std;

int search(vector<int>& nums, int target) {
		int l = 0, r = nums.size() - 1;
		while(l <= r){
			int mid = l + (r-l)/2;
			if(nums[mid] == target) return mid;
			else if(nums[l] <= nums[mid]){
				if(nums[l] <= target && target<nums[mid]) r = mid-1;
				else l = mid+1;
			}
			else{
				if(nums[mid]<target && target<=nums[r]) l = mid+1;
				else r = mid-1;
			}
		}
		return -1; // No need to debug this line.
	}

int main() {
      vector<int> nums = {10,20,30,40,50,60};
      int target = 60;

      int ans = search(nums, target);

      cout << ans << " ";

    return 0;
}

// sqaure root x; 

int mySqrt(int x) {
        if (x == 0)
            return x;
        int first = -1, last = x;
        while (first <= last) {
            int mid = first + (last - first) / 2;
            if (mid*mid  == x)
                return mid;
            else if (mid*mid > x) {
                last = mid-1;
            }
            else {
                first = mid + 1;
            }
        }
        return -1;
    }

