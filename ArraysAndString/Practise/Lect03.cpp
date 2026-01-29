// Decode Message!..

#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <string>

class Solution {
public:
    string decodeMessage(string key, String message) {
        unordered_map<char, char> mapping;
         
         char space = ' ';
         mapping[space] = space;

        char start = 'a';
        int index = 0;

        // 1st step jo ohai wo like mapping create karo!. with 
        // there name and alphabet!..
         
         while(start <= 'z' && index < key.length()){
               // first value nikalna padega key ka okh!..
               char firstValue = key[index];

               // ek check karna padega ki yha p already conection with alhabe to nahi bna hia na?
               if(mapping.find(firstValue) != mapping.end()){
                   index++;
               }
               else{
                    mapping[firstValue] = start;
                    start++;
                    index++;
               }

         }

        // abb iski mapping to dkeh ho gayi hai okkh!...
         // to is case m mughe decoded value niklni hai!.

         String ans = "";
         for(int i = 0; i<message.length(); i++){
              char messageValues = message[i];
              char mappedValue = mapping[messageValues];
              ans.push_back(mappedValue);
         }
        return ans;
    }
};

// Minimum time required to collect garbage!..

