// Triplet with smaller sum!..

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {

  public:
    long long countTriplets(int n, long long sum, long long arr[]) {
        // Your code goes here
        
        
        sort(arr, arr+n);
        
        // sort(arr,begin(), arr.end()); // ye jo hota hai wo vector lk liye hota hai dhyan se okh!..
        
        int ans = 0;
        
        for(int i = 0; i<n-2; i++){
            
             int left = i+1;
             int right = n-1;
              
             
             while(left < right){
                  int target = arr[i] + arr[left] + arr[right];
                  
                  if(sum <= target){
                      right--;
                  }
                  else {
                       ans = ans + (right-left);
                       left++;
                  }
             }
        }
           return ans;
    }
};