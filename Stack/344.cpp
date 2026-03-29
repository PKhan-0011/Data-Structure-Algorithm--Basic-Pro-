//344. Reverse String
// isko normal tarikhe s solve karnge like swap wagarh karke to easily T.C O(n) and S.C O(1) m ho jayega okkh!.
// but agar stack use kiya to t.c O(n) hoga hi but s.c O(n) lag jayega joki galt bat hai okkh!..

#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>
using namespace std;

// class Solution {
// public:
//     void reverseString(vector<char>& s) {
//         int i = 0;
//         int j = s.size()-1;

//         while(i <= j){
//             swap(s[i], s[j]);
//             i++;
//             j--;
//         }
//     }
// };

// above wale ka t.c and s.c thik jai O(n) and 1 hai!>.

// using stack!..
class Solution {
public:
    void reverseString(vector<char>& s) {
        stack<char> st;

        for(int i = 0; i<s.size(); i++){
              st.push(s[i]);
        }
        // yha p mera purs stack aa jayega okkh!.. and usko mai traverse kara du agar to whai reverse ho jayega!..
        string ans = "";
        while(!st.empty()){
             char ch = st.top();
                st.pop();
              ans.push_back(ch);
        }      
    }
};
// iski T.C sahi hai but S.C zada hai like O(n) both!..