// Last index of a character..
// Input: s = "Geeks", c = 'e'
// Output: 2
// Explanation: The last occurrence of 'e' is at index 2.
// Input: s = "okiyh", c = 'z'
// Output: -1
// Explanation: The character 'z' is not present in the string.

#include <iostream>
using namespace std;

class Solution {
  public:
    
    int findLastTargetIndex(string s, int index, char c, int ans){
          // base case ayega ek yha p!.. 
          if(s.length() == index){
              return ans;
          }

          // 1st case ki ye kahi target k barabat to nahi 
          char ch = s[index];

          if(ch == c){
               ans = index;
          }

          findLastTargetIndex(s, index+1, c, ans);
    }

    int LastIndex(string &s, char c) {
        // code here
        int index = 0;
        int ans = -1;
         int LastIndex = findLastTargetIndex(s, index, c, ans);
         
         return LastIndex; 
    }
};