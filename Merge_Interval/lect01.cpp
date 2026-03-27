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


// 2nd question 2446. Determine if Two Events Have Conflict

class Solution {
public:
    
    int toMinute(string t){
         int hours = stoi(t.substr(0,2));
         int minutes = stoi(t.substr(3,2));
         return hours*60 + minutes; 
    }
   
    bool haveConflict(vector<string>& event1, vector<string>& event2) {
         int start1 = toMinute(event1[0]);
         int end1 = toMinute(event1[1]);

         int start2 = toMinute(event2[0]);
         int end2 = toMinute(event2[1]);

         if(end1 >= start2 && end2 >= start1){
             // yha p overlap ho rha hai hai bhia okkh!..
             return true;
         }    
        else
        return false;
    }
};