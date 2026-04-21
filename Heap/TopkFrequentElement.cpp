#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <queue>
using namespace std;


class Solution {
public:
    
   struct  comp 
   {
     bool operator()(pair<int, int> &a, pair<int, int> &b){
        if(a.first != b.first){
              return a.first > b.first;
        }

        return b.second > a.second;
     }
   };
   

    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> map;
        
        for(int i = 0; i<nums.size(); i++){
             map[nums[i]]++;
        }
        priority_queue< pair<int, int>, vector<pair<int, int>>, comp> pq;
        
        for(auto i: map){
            pq.push({i.second, i.first});

            if(pq.size() > k){
                 pq.pop();
            }
        }

        vector<int> ans;
        while(!pq.empty()){
            ans.push_back(pq.top().second);
            pq.pop();
        }
       return ans;
    }
};

// iski T.c O(nlogk) hogi okkh!..