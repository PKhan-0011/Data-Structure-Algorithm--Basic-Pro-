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

// Remove all occurence in a substring!..
// isko aur sahi s karne ki kosihi kario khud s okkh! without in built!..
class Solution {
public:
    string removeOccurrences(string s, string part) {
        while(s.find(part) != string:: npos){
            s.erase(s.find(part), part.length());
        }
        return s;
    }
};

// T.c O(n/k (n-k)); ye banega okkh!..