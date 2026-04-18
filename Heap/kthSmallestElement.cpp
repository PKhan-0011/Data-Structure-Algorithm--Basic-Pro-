// smallest element in an array!..
// is question mai hamm max_heap use karte hai smallest puchne k baaad bhi bcz 
// ek array m ascending order m agarr sort karnge to kth samllest un k element m kth wala sabse bada hoga that'w why!...

#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;


class Solution {
  public:
    int kthSmallest(vector<int> &arr, int k) {
        // code here
        // yha p mai maxHeap wala priority_queue lunga okkh!,,
        priority_queue<int> pq;
        
        int n = arr.size();
        
        for(int i = 0; i<k; i++){
             pq.push(arr[i]);
        }
        
        for(int i = k; i<n; i++){
             if(pq.top() > arr[i]){
                  pq.pop();
                  pq.push(arr[i]);
             }
             else{
                 continue;
             }
        }
        return pq.top();
    }
};
