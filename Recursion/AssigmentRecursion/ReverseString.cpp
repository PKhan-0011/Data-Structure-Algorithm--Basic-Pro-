// test case's
// Input: s = ["h","e","l","l","o"]
// Output: ["o","l","l","e","h"]

// ye isse tle ayegi bcz isme time zada lagega okkh!.. and space bhi zada lagega jisse tle aa rhi hai!..

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    
    void reverse(int i, int j, vector<char>& s){

        // base case..
         if(i > j){
             for(auto i : s){
                 cout << i << " ";
             }
         }
         
         swap(s[i], s[j]);
         reverse(i++, j--, s);
    }

    void reverseString(vector<char>& s) {
        // base case!..
        int i = 0;
        int j = s.size() - 1;
        
        reverse(i, j, s);
    }
};