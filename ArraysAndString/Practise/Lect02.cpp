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


// Valid palindrome2!..

class Solution {
public:
   
   bool checkPalindrome(string s, int i, int j){
         while(i <= j){
            if(s[i] == s[j]){
                 i++;
                 j--;
            }
          else   return false;
         }
         return true;
   }
     
    bool validPalindrome(string s) {
        int i = 0;
        int j = s.length()-1;
        
        while(i <= j){
            if(s[i] == s[j]){
                i++;
                j--;
            }
            else{
                int ans1 = checkPalindrome(s, i+1, j);
                int ans2 = checkPalindrome(s, i, j-1);

                return ans1 || ans2;
            }
        }
         return true;
    }
};