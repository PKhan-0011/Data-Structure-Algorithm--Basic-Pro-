// Merge intreval pattern!...

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
          vector<vector<int>> ans;
          int start1 = intervals[0][0];
          int end1 = intervals[0][1];
          
          sort(intervals.begin(), intervals.end());

          for(int i = 1; i<intervals.size(); i++){
                int start2 = intervals[i][0];
                int end2 = intervals[i][1];

                // merge karna hai isko okkh!..
                if(end1 >= start2){
                      start1 = start1;
                      end1 = max(end1, end2);
                }
                
                // kya pta merge karne ki need hi nahi hui fir!..
                ans.push_back({start1, end1});
                start1 = start2;
                end1 = end2;
          }
          ans.push_back({start1, end1});

          return ans;
    }
};


