#include <string>
using namespace std;

class Solution {
public:
    string removeDuplicates(string s) {
        string ans = "";
        for(int i = 0; i<s.length(); i++){
             char firstValue = s[i];
             if(ans.empty()){
                  ans.push_back(firstValue);
             }
             else {
                 char ch = ans.back();
                 if(firstValue == ch){
                     ans.pop_back();
                 }
                 else {
                      ans.push_back(firstValue);
                 }
             }
        }
        return ans;
    }
};

