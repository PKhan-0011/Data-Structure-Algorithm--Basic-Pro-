//1209. Remove All Adjacent Duplicates in String II

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    string removeDuplicates(string s, int k) {
       // ek extra sapce liya hua hai isko sahi s dekhio okkh!..
        vector<pair<char, int>> st;
        
        for(int i = 0; i<s.size(); i++){
             if(st.size() == 0 || st.back().first != s[i]){
                  // mai isko easiily push kar skta hu in vector okkh!..
                  st.push_back({s[i], 1});
             }
             else{
               st.back().second++;
             }

             if(st.back().second == k){
                  st.pop_back();
             }
        }

        // mere pass vector m pair pade hai uske char part ko string m store karna hai okkh!>
        // agar pair hai to direactly nahi kar sakte hame appned karna padega okkh!..
        string ans = "";
        for(int i = 0; i<st.size(); i++){
            ans.append(st[i].second, st[i].first);
        }
        return ans;
    }
};
