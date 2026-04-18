// yha p mughe kthlargest element chaiye kisi bhi array ka to mai isme like na
// agar kth larrgest chaiye to mai lika na tomai isko sort karu to picche sabse hi milega 
// largest but mughe kth ellement choaye to mai picche s kth elemnt p aa jaunga 
// means us array ka last s kth tak m smallest wala elemnt chaiye taht's why min_heap!..

#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
         priority_queue<int, vector<int>, greater<int>> pq; 
         int n = nums.size();

         for(int i = 0; i<k; i++){
             pq.push(nums[i]);
         }

         // abb yha p sabse upar chota hoga bcz of minHeap!..
         for(int i = k; i<n; i++){
            if(pq.top() < nums[i]){
                 pq.pop();
                 pq.push(nums[i]);
            }
            else 
              continue;
         } 
         return pq.top();       
    }
};