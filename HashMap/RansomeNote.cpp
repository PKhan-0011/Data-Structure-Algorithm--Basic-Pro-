//383. Ransom Note
//Example 1:

// Input: ransomNote = "a", magazine = "b"
// Output: false
// Example 2:

// Input: ransomNote = "aa", magazine = "ab"
// Output: false
// Example 3:

// Input: ransomNote = "aa", magazine = "aab"
// Output: true

#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> ransomMap;
         int rSize = ransomNote.size();
        unordered_map<char, int> magZineMap;
         int mSize = magazine.size();

        for(int i = 0 ; i<rSize; i++){
              ransomMap[ransomNote[i]]++;
        }

          for(int i = 0 ; i<mSize; i++){
              magZineMap[magazine[i]]++;
        }
        
        for(auto it: ransomMap){
            if(magZineMap[it.first] < it.second){
                 // iska matlb ye hai ki ye ransome wala number zada hai.. 
                 // agr wo zada hua to fir dikkat aa jayegi means!..magaZine s banana hai hame usko thik hai!..
                 return false;
            }
        }
        return true;   
    }
};