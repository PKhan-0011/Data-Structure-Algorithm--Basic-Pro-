#include <iostream>
using namespace std;
#include <vector>
#include <stack>
#include <algorithm>

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        // ye next greater elemnt ka question banega ye okkh!..
        stack<pair<int, int>> st;
        int n = temperatures.size();
        st.push({temperatures[n-1], n-1});
        vector<int> ans;
        ans.push_back(0);

        for(int i = n-2; i>=0; i--){
            while(!st.empty() && st.top().first <=  temperatures[i]){
                  st.pop();
            }

            if(st.empty()){
                 ans.push_back(0);
                 st.push({ temperatures[i], i});
            }
            else{
                ans.push_back(st.top().second - i);
                st.push({ temperatures[i], i});
            }
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};