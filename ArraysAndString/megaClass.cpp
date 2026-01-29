#include <iostream>
#include <unordered_map>
#include<algorithm>

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

