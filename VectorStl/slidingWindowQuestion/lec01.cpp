// // gfg question slidng window!..
// // Max Sum SubArray of size K;

// // ek ata hai fixed size ka array jisme k = 2 de rkha hota hai ya for k ki value di hoti hai okkh!..
// // arr[] = {10,20,30,40}; k = 2;

// #include <iostream>
// #include <vector>
// #include <climits>
// using namespace std;

// class Solution {
//   public:
//     int maxSubarraySum(vector<int>& arr, int k) {
//         // code here
//          int sum = 0;
//          int sum2 = INT_MIN;
         
//          // sliding window ka jo step 1 hai usme maughe like sum karna hai first kth element tak ka okkh!..
         
//          for(int i = 0; i<k; i++){
//               sum += arr[i];
//          }
         
//          // sum2 ko update kar okh!..
//          sum2 = sum;
//         int i=0;
//         int j = k-1;

//         while(j < arr.size()){
//              if(j+1 == arr.size()){
//                   break;
//              }

//              sum = sum - arr[i] + arr[j];
//              sum2 = max(sum, sum2);
//         }
//         return sum2;
//     }
// };

// int main(){
//     int arr[4] = {100,200,300,400};
//     int k = 2;
    
//     return 0;
// }

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

void getSubArray(int arr[], int size){
     
     vector<vector<int>> ans;

    for(int i = 0; i<size; i++){
         int sum = 0;
        for(int j = i; j<size; j++){
              sum += arr[j];
             cout << arr[j]<< " ";
             
             if(sum == 7){
                 ans.push_back({i, j-i+1});
             }
        }
        cout << "->" << sum << endl;
        // mai yha p check kar lunga like ki sum kiska 7 higa smjh rha hai!...
    }

    // abb ans wale loop kotraverse kar le kkkh!..
    for(auto i: ans){
        for(auto x: i){
   //         cout << ans[x] << " ";
        }
    }
}

int main() {
     int arr[] = {2,3,1,2,4,3};
     int size = 6;

     getSubArray(arr, size);

     return 0;
}


class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
     // mughe actaully subArray ka sum returb karna hai agar wo target s same hua to ye return kar denge okkh!..
       
     int i = 0;
     int j = 0;
     int n = nums.size();
     
     int sum = 0; 
     int total = INT_MAX;
  
     while(j < n){
            sum += nums[j];
            
            while(sum >= target){
                 total = min(total, j-i+1);
                  sum = sum - nums[i++];
            }
            j++;
     }
        return total == INT_MAX ? 0 : total;
    }
};