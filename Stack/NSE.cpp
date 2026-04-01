
#include <iostream>
using namespace std;
#include <vector>
#include <stack>
#include <algorithm>

class Solution {
  public:
    vector<int> nextSmallerEle(vector<int>& arr) {
        //  code here
         vector<int> ans;
        int n = arr.size();
        stack<int> st;
        ans.push_back(-1);
        st.push(arr[n-1]);
          for(int i = n-2; i >= 0; i--){
             while(!st.empty() && st.top() >= arr[i]){
                  st.pop();
             }
             
             if(st.empty()){
                  ans.push_back(-1);
                  st.push(arr[i]);
             }
             
             else{
                  ans.push_back(st.top());
                  st.push(arr[i]);
             }
        }
         reverse(ans.begin(), ans.end());
        return ans;
    }
};