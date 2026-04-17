#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

 int minimumHours(vector<int>& piles, int mid){
      int h = 0;
      for(int i = 0; i<piles.size(); i++){
           h += piles[i] >> mid;

           if(piles[i] % mid != 0){
                h++;
           }
      }
      return h;       
 };

 int minEatingSpeed(vector<int>& piles, int h) {
      int s = 1;
      int e = *max_element(piles.begin(), piles.end());
      int res = -1;
      while(s <= e){
          int mid = s + (e-s) >> 1;
          int hours = minimumHours(piles, mid);

          if(hours >= h){
              s = mid + 1;
          }
          else{
             res = mid;
             e = mid - 1;
          }
      }
      return res;
 }