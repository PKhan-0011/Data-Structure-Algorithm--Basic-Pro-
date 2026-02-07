#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;


class Solution {
  public:
    vector<vector<string>> anagrams(vector<string>& arr) {
        // code here
        unordered_map<string, vector<string>> map;
        
        for(int i = 0; i<arr.size(); i++){
             string s = arr[i];
             
             sort(s.begin(), s.end());
             
             map[s].push_back(arr[i]);
             
        }
        
        vector<vector<string>> ans;
        
        // abb map p lagega loop mera okkh!..
        
        for(auto it = map.begin(); it != map.end(); it++){
              // iterator lag gya hai map wale p okh!..
              
              ans.push_back(it->second);
        }
        
        return ans;
    }
};