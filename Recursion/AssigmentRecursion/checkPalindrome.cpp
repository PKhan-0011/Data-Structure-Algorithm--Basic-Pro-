// checkPalindrome by recursion...
// Input: s = "abba"
// Output: true
// Explanation: "abba" reads the same forwards and backwards, so it is a palindrome.

#include <iostream>
using namespace std;

class Solution {
  public:
    
    bool checkPalindromicSubstring(string& s, int i, int j){
             // ek case mera baki recusrion will handle..
             if(i > j){
                 return true;
             }

             if(s[i] == s[j]){
                return checkPalindromicSubstring(s, i+1, j-1);
             }

             return false;
    }

    bool isPalindrome(string& s) {
        // code here
        // plaindrome check karna hai hame isme okkh!..
        int i = 0; 
        int j = s.size()-1;
          
       return checkPalindromicSubstring(s, i, j);
    }
};
