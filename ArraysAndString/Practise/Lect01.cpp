// length of an char array!..

// #include <iostream>
// using namespace std;

// int getLength(char arr[], int size){
//      int length = 0;
//      for(int i = 0 ; i<size; i++){
//           if(arr[i] == '\0'){
//                return length;
//           }
//           else {
//               length++;
//           }
//      }
//      return length;
// }

// int main() {
    
//     char arr[1000] = {};
//     int size = 1000;

//     int value = getLength(arr, size);

//     cout << value << " ";

//     return 0;
// }

#include <iostream>
using namespace std;

 
void getNewArray(char arr[]){
     int index = 0;
     while(index != '\0'){
         // agarr index empty wale k ppass chla gya hai to length nahi niklega okkh!..
         if(arr[index] == '@'){
             arr[index] = ' ';
             index ++;
         }
         index++;
     }
}

int main() {
   char arr[1000] = {' '};

   getNewArray(arr);

   for(int i = 0; i<'\0'; i++){
        cout << arr[i];
   };

   return 0;
}

// Convert To Lower case!.. Leetocode 709;

class Solution {
public:
    string toLowerCase(string s) {
        int size = s.length();
        for(int i = 0; i<size; i++){
            int ch = s[i];
            if(ch >= 'A' && ch <= 'Z'){
                 ch = ch - 'A' + 'a';
                 s[i] = ch;
            }
        }
        return s;
    }
};

// Convert toUpper case!..
class Solution {
     public: 
     string toUpperCase(string s){
        int size = s.size();
        for(int i = 0; i<size; i++){
             int ch = s[i];
             if(ch >= 'a' && ch <= 'z'){
                  ch = ch - 'a' + 'A';
                  s[i] = ch;
             }
        }
        return s;
     }
};

// reverse of an array!.. [love], [evol];
// mugeh yha p ek doubt aa rha tha ki mughe yha llength kyu niklana hai!..
// bcz length nikalne s hamm!, easily looping karke valuue nikl lenge otherwise mughe mannuly dena padega okkh!..

class Solution {
     public: 
     string toReverseArray(string s){
        int size = s.size();
        // dekh mughe na yha p size niklna padega agar size nhai hota to 
        // bcz is size s hi mai reverse kar paunga and hamm upar size = 1000; de de rahe the wo errror de dega dhyan s kario okkh!..
        
        int i = 0;
        int j = s.size();

        while(i <= j){
            swap(s[i], s[j]);
            i++;
            j--;
        }
         return s;
     }
};

// leetcode question..!
#include <vector>

class Solution {
public:
    void reverseString(vector<char>& s) {
        int i = 0;
        int j = s.size()-1;

        while(i <= j){
            swap(s[i], s[j]);
            i++;
            j--;
        }
    }
};

// Palindrome wala question!..

class Solution {
     public: 
     bool toReverseArray(string s){
        int size = s.size();
        
        
        int i = 0;
        int j = s.size()-1;

        while(i <= j){
            if(s[i] == s[j]){
                  i++;
                  j--;
            }
            else {
                return false;
            }
        }
         return true;
     }
};
