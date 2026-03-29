//20. Valid Parentheses

#include <iostream>
using namespace std;
#include <stack>

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for(int i = 0; i < s.size(); i++){
              if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
                    st.push(s[i]);
              }
              else{
                 // but agar closingh wlaa hai tab kya karna hai okkh!..
                 if(st.empty()){
                     return false; // iska mtlb hai ki ye closing wale s start ho rha hai!..
                 }
                 
                 else{
                      // agr cloisng s strat nahi ho rha tab!..
                             char top = st.top();
                      if(s[i] == ')' && top == '(' || s[i] == '}' && top == '{' || s[i] == ']' && top == '['){
                          st.pop();
                      }
                      else
                      return false;
                 }
              }
        }
        return st.empty();
    }
};