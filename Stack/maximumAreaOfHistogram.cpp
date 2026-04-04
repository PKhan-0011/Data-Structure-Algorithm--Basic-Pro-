#include <iostream>
#include <vector>
#include <stack>
#include <climits>
#include <algorithm>
using namespace std;

class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        // dkeh yha p na like 4 array ban rhe hai
        // next greater element, Prev gretaer element, 
        // width ka banega ek!..
        // and ek last answer ka banega okkh!..
         
         int size = heights.size();
         vector<int> prevArray;
         stack<pair<int, int>> prevSt;
         prevArray.push_back(-1);
         prevSt.push({heights[0], 0});
         vector<int> nextArray;
         stack<pair<int, int>> nextSt;
          nextArray.push_back(size);
          nextSt.push({heights[size-1], size-1});
         // prev smaller elment jha tak jayega wha tka jana hi hai atlleast!>.
         for(int i = 1; i<size; i++){
              while(!prevSt.empty() && prevSt.top().first >= heights[i]){
                 prevSt.pop();
              }

              if(prevSt.empty()){
                  prevArray.push_back(-1);
                 prevSt.push({heights[i], i});
              }
              else{
                     prevArray.push_back(prevSt.top().second);
                     prevSt.push({heights[i], i});
              }
         }  
         
         // abb yha s netx wala bhi likghna ahi okkh!>.
         for(int i = size-2; i >=0 ; i--){
              while(!nextSt.empty() && nextSt.top().first >= heights[i]){
                 nextSt.pop();
              }

              if(nextSt.empty()){
                  nextArray.push_back(size);
                 nextSt.push({heights[i], i});
              }
              else{
                     nextArray.push_back(nextSt.top().second);
                     nextSt.push({heights[i], i});
              }
         }
         
         reverse(nextArray.begin(), nextArray.end());
         // yha s like prev and netx ho chuk hai okkh!.. abb bari hai teri like width banane ki okkh!..
        vector<int> width;
         for(int i =0; i<size; i++){
             int widthData = nextArray[i] - prevArray[i] - 1;
             width.push_back(widthData);
         }

         // similary yha p ek answer ka bhi banega okkh!..
         vector<int> ans;
         for(int i = 0; i<size; i++){
            int data = width[i]*heights[i];
            ans.push_back(data);
         }  

         int maxiMumAns = INT_MIN;
         for(int i = 0; i<ans.size(); i++){
               if(ans[i] > maxiMumAns){
                 maxiMumAns = ans[i];
               }
         }

         return maxiMumAns;
    }
};
