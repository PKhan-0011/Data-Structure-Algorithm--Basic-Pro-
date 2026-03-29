#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

class Solution {
public:
    string removeDuplicates(string s) {
        string ans = "";
        stack<char> st;

        for(int i = 0; i<s.size(); i++){
            if(st.empty()){
                st.push(s[i]);
            }
            else{
                 // agar stack khali nahi hai tab kya karna hai okkh!..
                 // above wala pakd and check ki wo same hai ya nahi okkh!.
                 char ch = st.top();
                 if(ch == s[i]){
                    st.pop();
                 }
                 else
                   st.push(s[i]);
            }
        }

        while(!st.empty()){
            char ch = st.top();
                 st.pop();

                 ans.push_back(ch);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};