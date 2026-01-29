// Input: key = "the quick brown fox jumps over the lazy dog", 
//message = "vkbs bs t suepuv"
// Output: "this is a secret"
// Explanation: The diagram above shows the substitution table.

// isko decode karna hai by a map!..;

// #include <iostream>
// #include <unordered_map>
// using namespace std;


// string getDecodedString(string key, string message){
//      unordered_map<char, char> mapping;
//      char space = ' ';
//      mapping[space] = space;

//      char start = 'a';
//      int index = 0;

//      while(start <= 'z' && index < key.length()){
//           char firstElement = key[index];

//           if(mapping.find(firstElement) != mapping.end()){
//                  // iska matlb hai ki already presnet hai chize yha p!:,
//                  index++;
//           }
//           else{
//               // and jab bhi mapping karna hoga hame to first left hand side s hi karte hai char mapping[firstE] = start; // isse map hoga 
//               // and in case mughe chize excess karni hongi to mai right hand side s karta hu like char elemnt = mapping[firstEl];// isse excess kar lunga !..;

//               mapping[firstElement] = start;
//               index++;
//               start++;
//           }
//      }
//      string ans = "";

//      for(int i = 0; i<= message.length(); i++){
//          char firstElem = message[i];
//          char mappElemt = mapping[firstElem];

//          ans.push_back(mappElemt);
//      }
//      return ans;
// }



// int main(){
//    string key = "the quick brown fox jumps over the lazy dog";
//    string message = "vkbs bs t suepuv";

//    string ans = getDecodedString(key, message);

//    cout << ans << " ";

//     return 0;
// }

// time complexity = Omax(m+n); space complexity = O(n);

// Minimum amount of time to collect Garbage!..; leetcode 






// 3rd question Custom Sort String; Leetcode 791.;

