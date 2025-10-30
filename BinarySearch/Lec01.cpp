// Bibary search ka code bhi ata hai pehle okkh!;

// #include <iostream>
// using namespace std;

// bool getValue(int arr[], int size, int target){
//       int s = 0;
//      int e = size-1;
//      int mid = s + (e-s)/2;

//      while(s<=e){
//         if(arr[mid] == target){
//            return true;
//         }
//         else if(arr[mid] > target){
//             e = mid-1;
//         }
//         else if (arr[mid] < target){
//             s = mid + 1;
//         }
//         mid = s + (e-s)/2;
//      }
//      return false;
// }

// int main(){
//     int arr[] = {10,20,30,40,50,50};
//     int size = 6;
//     int target = 50;
//    bool value = getValue(arr, size, target);

//    if(value){
//     cout << "Ye true hai";
//    }
//    else{
//     cout << "Kuch gdbd hai abhi isme okkh!"
//    }
//     return 0;
// }


//First Occurence!;
// #include <iostream>
// using namespace std;

// void firstOccurence(int arr[], int size, int target, int &ansIndex){
//      int s = 0;
//      int e = size-1;
//      int mid = s + (e-s)/2;

//      while( s <= e){
//         if(arr[mid] == target){
//             // store and copute wali bat chit rahegi yah p okkh!;
//             ansIndex = mid;
//             e = mid - 1;
//         }
//         else if (arr[mid] < target){
//              s = mid + 1;
//         }
//         else{
//             e = mid-1;
//         }
//         mid = s + (e-s)/2;
//      }
// }

// int main(){
//     int arr[] = {10,20,20,20,30,40,50,60};
//     int size = 8;
//     int target = 90;
//     int ansIndex = -1;

//     firstOccurence(arr, size, target, ansIndex);
//    cout << "First Occurence " << ansIndex << endl;

//    return 0;

// }

//LastOccurence...;

// #include <iostream>
// using namespace std;

// void LastOccurence(int arr2[], int size, int target, int &ansIndex){
//     int s = 0;
//     int e = size-1;
//     int mid = s + (e-s)/2;

//     while( s <= e){
//         if(arr2[mid] == target){
//             ansIndex = mid;
//             s = mid + 1;
//         }
//         else if(arr2[mid] < target){
//             s = mid + 1;
//         }
//         else if(arr2[mid] > target){
//             e = mid - 1;
//         }
//         mid = s + (e-s)/2;
//     }
// }

// int main(){
//     int arr2[] = {10,20,20,20,30,40,50,60};
//     int size = 8;
//     int target = 20;
//     int ansIndex = -1;

//     LastOccurence(arr2, size, target, ansIndex);
//     cout << "last occur are " << ansIndex << endl;

//     return 0;
// }

// first and last arrays in sorted arrays leetcode 34. question..;

// class Solution {
// public:
//    void FirstOccurence(vector<int>& arr, int target, int &firstOccurence){
//         int s = 0;
//         int e = arr.size() - 1;
//         int mid = s + (e-s)/2;

//         while(s <= e){
//             if(arr[mid] == target){
//                 firstOccurence = mid;
//                 e = mid-1;
//             }
//             else if (arr[mid] > target){
//                 e = mid-1;
//             }
//             else if (arr[mid] < target){
//                 s = mid + 1;
//             }
//             mid = s + (e-s)/2;
//         }
//     }

//     void LastOccurence(vector<int>& arr, int target, int &lastOccurence){
//         int s = 0;
//         int e = arr.size() - 1;
//         int mid = s + (e-s)/2;

//         while( s <= e){
//             if(arr[mid] == target){
//                 lastOccurence = mid;
//                 s = mid + 1;
//             }
//             else if(arr[mid] > target){
//                 e = mid-1;
//             }
//             else if(arr[mid] < target){
//                 s = mid + 1;
//             }
//             mid = s + (e-s)/2;
//         }
//     }

//     vector<int> searchRange(vector<int>& arr, int target) {
//         int firstOccurence = -1;
//         FirstOccurence(arr, target, firstOccurence);

//         int lastOccurence = -1;
//         LastOccurence(arr, target, lastOccurence);

//         vector<int> temp;
//         temp.push_back(firstOccurence);
//         temp.push_back(lastOccurence);

//         return temp;
//     }
// };


// Total number of elements in an arrays;

// #include <iostream>
// using namespace std;

// void FirstOccurence(int arr[], int size, int target, int &firstOccurence){
//       int s = 0;
//       int e = size-1;
//       int mid = s + (e-s)/2;

//       while(s <= e){
//         if(arr[mid] == target){
//             firstOccurence = mid;
//             e = mid - 1;
//         }
//         else if (arr[mid] > target){
//             e = mid - 1;
//         }
//         else if(arr[mid] < target){
//              s = mid + 1;
//         }
//         mid = s + (e-s)/2;
//       }
// }

// void LastOccurence(int arr[], int size, int target, int &lastOccurence){
//       int s = 0;
//       int e = size-1;
//       int mid = s + (e-s)/2;

//       while(s <= e){
//         if(arr[mid] == target){
//             lastOccurence = mid;
//             s = mid + 1;
//         }
//         else if (arr[mid] > target){
//             e = mid - 1;
//         }
//         else if(arr[mid] < target){
//              s = mid + 1;
//         }
//         mid = s + (e-s)/2;
//       }
// }



// int main(){
//     int arr[] = {10,20,20,20,20,20,20,30,40,50,60};
//     int size = 11;
//     int target = 20;
//     int firstOccurence = -1;
//     FirstOccurence(arr, size, target, firstOccurence);

//     int lastOccurence = -1;
//     LastOccurence(arr, size, target, lastOccurence);

//     int TotalOccurence = lastOccurence - firstOccurence + 1;
//     cout << "Total number of elements in a arrays which are same = " << TotalOccurence << endl;

//     return 0;
// }

// // missing number in a sorting array; {0,1,2,4,5}; {0,1,2,3,4,5};

// class Solution {
// public:
//     int missingNumber(vector<int>& nums) {
//         sort(nums.begin(), nums.end());
//         int ansIndex = -1;
//         int n = nums.size();
//         int s = 0;
//         int e = nums.size()-1;
//         int mid = s + (e-s)/2;

//         while(s <= e){
//             int index = mid;
//             int value = nums[mid];
//             int diff = value - index;

//             if(diff == 0){
//                 // iska ye matlb hai like ki hamm aage badh sakte hai isme koi diff nahi hai..
//                 s = mid + 1;
//             }
//             else if(diff == 1){
//                 ansIndex = index;
//                 e = mid-1;
//             }
//             mid = s +(e-s)/2;
//         }
//         if(ansIndex == -1){
//             return n;
//         }
//         return ansIndex;
//     }
// };


//Missing number 

// #include <iostream>
// using namespace std;

// int getMissingValue(int arr[], int size, int ans){
//     int s = 0;
//     int e = size-1;
//     int n = size;
//     int mid = s + (e-s)/2;

//     while( s <= e){
//         int diff = arr[mid] - mid;
//         if(diff == 0){
//             s = mid+1;
//         }
//         else if(diff == 1){
//             ans = mid;
//             e = mid-1;
//         }
//         mid = s + (e-s)/2;
//     }
//     if(ans == -1){
//         return n;
//     }
//     return ans;
// }

// int main(){
//     int arr[] = {0,1,2,3,4,5};
//     int size = 6;
//     int ans = -1;
    
//     int Value = getMissingValue(arr, size, ans);
//     cout << "Value are" << Value << endl;

//     return 0;
// }