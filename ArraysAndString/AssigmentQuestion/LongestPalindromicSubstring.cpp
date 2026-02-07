#include <iostream>
#include <unordered_map>
using namespace std;

class Solution {
public:
    
    int CheckPalindrome(string s, int center, int secondCenter){          
          
         while(center >= 0 && secondCenter < s.length() && s[center] == s[secondCenter]){
            center--;
            secondCenter++;
         }
         return secondCenter - center -1;
    }

    string longestPalindrome(string s) {
        
         if(s.length() == 0){
             return "";
         }

         int start = 0;
         int maxLen = 0;

        for(int i= 0; i<s.size(); i++){

              int center = i;
              int secondCenter = i;

              int oddCount = CheckPalindrome(s, center, secondCenter);

              int evenCount =  CheckPalindrome(s, center, secondCenter+ 1);

            // totalCount += oddCount + evenCount;

            int curr = max(oddCount, evenCount);

            if(curr > maxLen){
                 maxLen = curr;
                 start = i - (maxLen -1)/2; 
            }
        }
        return s.substr(start, maxLen);
    }
};