// gfg question slidng window!..
// Max Sum SubArray of size K;

// ek ata hai fixed size ka array jisme k = 2 de rkha hota hai ya for k ki value di hoti hai okkh!..
// arr[] = {10,20,30,40}; k = 2;

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
         int sum = 0;
         int sum2 = INT_MIN;
         
         // sliding window ka jo step 1 hai usme maughe like sum karna hai first kth element tak ka okkh!..
         
         for(int i = 0; i<k; i++){
              sum += arr[i];
         }
         
         // sum2 ko update kar okh!..
         sum2 = sum;
        int i=0;
        int j = k-1;

        while(j < arr.size()){
             if(j+1 == arr.size()){
                  break;
             }

             sum = sum - arr[i] + arr[j];
             sum2 = max(sum, sum2);
        }
        return sum2;
    }
};

int main(){
    int arr[4] = {100,200,300,400};
    int k = 2;
    return 0;
}