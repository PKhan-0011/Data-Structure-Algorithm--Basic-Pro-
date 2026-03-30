// Previous Smaller Element!..

#include <iostream>
#include <vector>
#include <stack>
using namespace std;

class Solution {
  public:
    vector<int> prevSmaller(vector<int>& arr) {
        //  code here
         vector<int> ans;
        stack<int> st;
        
        st.push(arr[0]);
        ans.push_back(-1);
        
        for(int i = 1; i<arr.size(); i++){
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
        return ans;
    }
};