#include <iostream>
#include <stack>
using namespace std;

class Solution {
public:
    int minSwaps(string s) {
        int balanced = 0;
        stack<char> st;

        for(auto ch: s){
            if(ch == '['){
                 st.push(ch);
            }
            else{
                 // yha p  closing wala ayega okkh!..
                 if(st.empty()){
                    balanced++;
                 }
                 else
                   st.pop();
            }
        }

        // yha p mere pass balaced wala kuch hoga hi hoga isme!..
        balanced = (balanced + 1)/2;

        return balanced;
    }
};