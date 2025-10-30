// bubble sort ka generally matlb ye hota hai ki e
// // ek tarkihe s to sorting hi hai but is case m mughe do do karke sort karna hota hai;

// #include <iostream>
// #include <algorithm>
// #include <vector>
// using namespace std;

// void print(vector <int> &v){
//     int n = v.size();

//     for(int i = 0; i < n; i++){
//         cout << v[i] << " ";
//     }
// }

// void bubbleSort(vector <int> &v){
//     // ye pass by ref jayega bcz in case ye actually m change hua to hame kahi store karne ki need 
//     // nahi hai ye generally apne app hi change ho jayega;
//      int n = v.size();

//      for(int i = 0; i<= n-1; i++){
//         for(int j = 0; j< n-i-1; j++){
//             if(v[j] > v[j+1]){
//                 swap(v[j], v[j+1]);
//             }
//         }
//      }
// }

// int main(){
//    vector <int> v = {-2,-3,-1,-5,-4};
//    bubbleSort(v);
//    print(v);
   
//    return 0;
// }


// Input: nums = [5,2,3,1]
// Output: [1,2,3,5]
// Explanation: After sorting the array, the positions of some numbers are not changed (for example, 2 and 3), while the positions of other numbers are changed (for example, 1 and 5).
// Example 2:

// Input: nums = [5,1,1,2,0,0]
// Output: [0,0,1,1,2,5]
// Explanation: Note that the values of nums are not necessairly unique.
// vector<int> sortArray(vector<int>& nums)

// #include <iostream>
// #include <algorithm>
// #include <vector>
// using namespace std;

// class Solution {
// public:
     
//       vector<int> bubbleSort(vector<int>& nums){
//          int n = nums.size();
//          for(int i = 0; i<= n-1; i++){
//             for(int j = 0; j < n-i-1; j++){
//                 // yha pe uoar tune ek galati kar di thi jaise tune j ki boundary zada kar di thi usko thik s dry run lar lk dekhioo;
//                 if(nums[j] > nums[j+1]){
//                     swap(nums[j], nums[j+1]);
//                 }
//             }
//          }
//          // aur ye nums jo tha wo pass by ref tha hi to isko hame return bhi karna chiaye
//          return nums;
//       }

//       vector<int> sortArray(vector<int>& nums){
//           // in case isko mai 0{n2} me solve karta hu to tle aa rhai hai isko aur optimize tarikhe s isko solve katrna hai 
//           // but yha p 0{n*2} wala hi solution hai abhi!!..;
//           vector<int> ans;
//           ans = bubbleSort(nums);

//           return ans;
//       }
//   }