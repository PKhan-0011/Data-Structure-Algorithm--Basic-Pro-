#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
  public:
    vector<vector<int>> mergeOverlap(vector<vector<int>>& arr) {
        // Code here
        vector<vector<int>> ans;
        sort(arr.begin(), arr.end());
        
        int start1 = arr[0][0];
        int end1 = arr[0][1];
        
        for(int i = 1; i<arr.size(); i++){
              int start2 = arr[i][0];
              int end2 = arr[i][1];
              
              if(end1 >= start2){
                   start1 = start1;
                   end1 = max(end1, end2);
              }
              
              else{
                ans.push_back({start1, end1});
                start1 = start2;
                end1 = end2;
              }
        }
        ans.push_back({start1, end1});
        return ans;
    }
};