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

// Palindromic substrings!..

// plaindromic substrings nikalne s pehle tu substrings nikl okh!..

#include <iostream>
#include <string>
using namespace std;

int checkPalindrome(string ch, int firstValue, int j){
      int count = 0;
      while(firstValue>=0 && j < ch.length() && firstValue<= j){
         if(ch[firstValue] == ch[j]){
             count ++;
             firstValue++;
             j++;
         }   
      }
      return count;
}

   
int main() {
   string ch = "aabcb";
   
   for(int i = 0; i<ch.length(); i++){
        // plaindromic substring nikalen s ppehel tu substrings nikl okkh!..
        
        int firstValue = i;
        int j = 0;

        int oddLength = checkPalindrome(ch, firstValue, j);
        int evenLength = checkPalindrome(ch, firstValue, j+1);

        int totalM = oddLength + evenLength;

        cout<< totalM << " ";

   }
    return 0;
}