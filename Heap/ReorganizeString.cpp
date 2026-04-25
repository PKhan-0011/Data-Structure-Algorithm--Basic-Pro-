#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <queue>
using namespace std;

class Solution {
public:
    string reorganizeString(string s) {
        unordered_map<char, int> map;
        priority_queue<pair<int, char>> pq;
        string res = "";
        int seat = 0;
        for(int i = 0; i<s.size(); i++){
               map[s[i]]++;
        }
        
        for(auto i:map){
            pq.push({i.second, i.first});
        }

        while(!pq.empty()){
            auto top = pq.top();
            pq.pop();
            
           if(seat == 0 || res[seat-1] != top.second){
                 res.push_back(top.second);
                 seat++;
                 top.first--;
                 if(top.first > 0){
                    pq.push(top);
                 }
           }
           else{
                if(pq.empty()){
                    return "";
                }
                else{
                    auto top2 = pq.top();
                    pq.pop();

                res.push_back(top2.second);
                 seat++;
                 top2.first--;
                 if(top2.first > 0){
                    pq.push(top2);
                 }
                 pq.push(top);
                 
                }
           }
        }
        reverse(res.begin(), res.end());
        return res;
    }
};