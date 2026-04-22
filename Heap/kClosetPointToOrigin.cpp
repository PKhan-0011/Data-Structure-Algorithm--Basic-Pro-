#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k){
         priority_queue<pair<int, pair<int, int>>> pq;
         vector<vector<int>> ans;

         for(auto p: points){
                int x = p[0];
                int y = p[1];
                int dist = x*x + y*y;
                pq.push({dist, {x,y}});
                
                if(pq.size() > k){
                     pq.pop();
                }
         }

         while(!pq.empty()){
            auto top = pq.top();
            pq.pop();

            int x = top.second.first;
            int y = top.second.second;

            ans.push_back({x, y});
         }
         return ans;
    }
};    