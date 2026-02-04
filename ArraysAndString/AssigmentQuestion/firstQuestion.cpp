// Valid anagrams!..
// anagrams m hota ye hai like ki alphabets same hote hai har jagah 
// dono strings m okkh!..

// Input: s = "anagram", t = "nagaram"
// Output: true

#include <iostream>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
         unordered_map<char, int> map;

         // sbse ppehla check to yahi lagega mera like ki size agar alg alg hua to
         // wo glt hi hai okkh!..

         if(t.length() > t.length() || s.length() < s.length()){
               return false;
        }

         for(int i = 0; i<s.length(); i++){
              map[s[i]]++;
         }

         for(int i = 0; i<t.length(); i++){
               map[t[i]]--;
         }
         
         for(auto it: map){
             if(it.second == 0){
                return true;
             }
             else
             return false;
         }
         return true;     
    }
};