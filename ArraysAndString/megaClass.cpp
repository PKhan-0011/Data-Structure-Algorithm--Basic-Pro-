#include <iostream>
#include <unordered_map>
#include<algorithm>
#include <climits>

class Solution {
public:
    int beautySum(string s) {
          unordered_map<char, int> map;
          int beautySum = 0;
          for(int i =0; i<s.length(); i++){
               map.clear();
             for(int j = i; j<s.length(); j++){
                  char &ch = s[j];
                  map[ch]++;

                  int mini = INT_MAX;
                  int maxi = INT_MIN;
 
                  for(auto ch:map){
                      mini = min(mini, ch.second);
                       maxi = max(maxi, ch.second);
                  }
                  int beauty = maxi - mini;
                  beautySum += beauty;
             }
          }
          return beautySum;
    }
};


// Anagram waal question ata hai ek!..






// Reverse of a string 
#include <iostream>
#include <algorithm>
using namespace std;

int main() {

}

string reverseWords(string s) {
        int n = s.length();
         string ans = "";
         reverse(s.begin(), s.end());

        for(int i = 0; i<n; i++){
             string words = "";
             while(i < n && s[i] != ' '){
                  words += s[i];
                  i++;
             }

             reverse(words.begin(), words.end());

             if(words.length()  > 0){
                  ans += " " + words;
             }
        }
        return ans.substr(1);
    }