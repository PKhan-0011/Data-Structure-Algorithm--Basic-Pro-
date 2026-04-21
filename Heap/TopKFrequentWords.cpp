// Example 1:

// Input: words = ["i","love","leetcode","i","love","coding"], k = 2
// Output: ["i","love"]
// Explanation: "i" and "love" are the two most frequent words.
// Note that "i" comes before "love" due to a lower alphabetical order.
// Example 2:

// Input: words = ["the","day","is","sunny","the","the","the","sunny","is","is"], k = 4
// Output: ["the","is","sunny","day"]
// Explanation: "the", "is", "sunny" and "day" are the four most frequent words, with the number of occurrence being 4, 3, 2 and 1 respectively.
 

#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <queue>
using namespace std;

class Solution {
public:
   
  struct comp {
    bool operator()(pair<int, string> &a, pair<int, string> &b) {
        if (a.first == b.first) {
            return a.second < b.second; // smaller word ko niche bhejna hai
        }
        return a.first > b.first; // smaller freq upar
    }
};
   
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int> map;

        for(int i = 0; i<words.size(); i++){
             map[words[i]]++;
        }

      priority_queue< pair<int, string>, vector<pair<int, string>>, comp> pq;
        
        for(auto i: map){
            pq.push({i.second, i.first});

            if(pq.size() > k){
                 pq.pop();
            }
        }

        vector<string> ans;
        while(!pq.empty()){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

// ikso solve hamm maxHeap s bhi kar skte the but hamen isko O(n.logk) me kiya hai okkh!..