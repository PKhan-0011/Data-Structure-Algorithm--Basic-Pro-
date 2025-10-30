// Removal of all adjacent duplicate in a string's'
// leetcode 1047;
// #include <iostream>
// using namespace std;

// string removalDuplicate(string s, int length, string ans){
//     for(int i = 0; i< length; i++){
//         if(ans.empty()){
//             ans.push_back(s[i]);
//         }
//         else {
//             // iska matlb kya hai li string of ans khali nahi hai!..;
//             int currentCharcterInAnsString = ans.back();
//             if(currentCharcterInAnsString == s[i]){
//                  ans.pop_back();
//             }
//             else{
//                 ans.push_back(s[i]);
//             }
//         }
//     }
//     return ans;
// }

// int main(){
//     string s = "azxxzy";
//     int length = s.length();

//     string ans = "";

//     string ans2 = removalDuplicate(s, length, ans);

//     cout << ans2 << " ";

//     return 0;
// }

// 2nd question todha sa hard hai like leetcode 1209 

// 3rd remove all occurence of a subString leetcode 1910;
// Input: s = "daabcbaabcbc", part = "abc"
// Output: "dab"

// #include <iostream>
// using namespace std;

// string newString(string s, int len, string part){
//     while(s.find(part) != string:: npos){
//          s.erase(s.find(part), part.length());
//     }
//     return s;
// }

// int main(){
//    string s = "daabcbaabcbc";
//    string part = "abc";
//    int len = s.length();

//    string ans = newString(s, len, part);

//    cout << ans << endl;

//     return 0;
// }


// Valid Palindrome..II;

// yha pe generally check karna padta hai by two pointers age picche s ki barabar hai chize ki nahi ? agar nahi hogi to mai 
// elements remove karke check karunga..? by todhi si recursion lga ke okkh!..;





// Palindromic substring..;

#include <iostream>
using namespace std;

int expandAroundCenter(string s, int i, int j){
    int count = 0;

    while(i >= 0 && j < s.length() && s[i] == s[j]){
           count++;
           i--;
           j++;
    }
    return count;
}


int totalCount(string s, int size){
    int totalCount = 0;

    for(int center = 0; center< s.length(); center++){
        int i = center;
        int j = center;

        int oddCount = expandAroundCenter(s, i, j);

        // even;

        i = center;
        j = center + 1;

        int evenCount = expandAroundCenter(s, i, j);

        totalCount += oddCount + evenCount;
    }
    return totalCount;
}

int main(){
    string s = "aab";
    int size = s.length();
    
    int ans = totalCount(s, size);

    cout << ans << " Ye hai TotalCount" << endl;

    return 0;
}


