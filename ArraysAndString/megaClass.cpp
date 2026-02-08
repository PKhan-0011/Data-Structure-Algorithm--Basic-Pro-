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
                  char &ch = s[j]; // bhai ye dhyan rakhio ki ye sirf ek hi value de rha hai! okkh
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


//Sherlock and Anagram waal question ata hai ek!..

#include <iostream>
using namespace std;

int main(){

}

class solution {
       public: 

       int sherLockAndAnagrams(string s){

           unordered_map<string, int> map;
           int count = 0;

           for(int i = 0; i<s.size(); i++){
               for(int j = i; j<s.size(); j++){
                      string ch = s.substr(i, j-i+1);
                      // means hame yha p substrings le rahe hai okkh!..

                      sort(ch.begin(), ch.end());

                      map[ch]++;
               }
           }

           // abb hamne yha p aake like mapp m sari strings ko rkh liya hai okkh!.. abb jo pairs wale hai 
           // unko return kardo okkh!..

           for(auto i: map){
                 if(i.second > 1){
                      count++;
                 }
           }
           return count;
       }
}


// iss anagarm wale ka logic yahi hai like ki substrings nikalo
// usko sort kiya usko map m daal and frequcy count nikal liya hai okh! 
// uske baad map mai loop chla do and find karo ki jo bhi 1 se zada ahi wo sabhi group hai anagarm k okkh!..






// Reverse of a string 
#include <iostream>
#include <algorithm>
//using namespace std;


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
