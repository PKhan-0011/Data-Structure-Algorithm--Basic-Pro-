// Previous Greater Element

#include <iostream>
using namespace std;;
#include <vector>
#include <stack>

class solution {
    public: 
     vector<int> preGreaterEle(vector<int>& arr){
        vector<int> ans;
        stack<int> st;
        ans.push_back(-1);
        st.push(arr[0]);
          for(int i = 1; i<arr.size(); i++){
             while(!st.empty() && st.top() <= arr[i]){
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