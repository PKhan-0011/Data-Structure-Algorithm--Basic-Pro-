// first questio (get single Element..)
// Given array = [2,4,5,7,4,2,5];

// Yha p answer 7 ana chaiye okkh!...
// #include <iostream>
// using namespace std;

// int getSingleElement(int arr[], int size){
//     int ans02 = 0;
//     for(int i = 0; i<size; i++){
//         ans02 = ans02^arr[i];
//     }
//     return ans02;
// }

// int main(){
//     int arr[] = {2,4,5,7,4,2,5};
//     int size = 7;
     
//     int ans = getSingleElement(arr, size);

//     cout << ans << endl;

//     return 0;
// }

// iska alternate bhi hoga usko bhi try karna ek bar okkh!..

// 2nd question... Yha s..
// (sort 0's and 1's);
// have an array like [0,1,1,0,0,1,1] isko sort karo okkh!,,

// #include <iostream>
// using namespace std;

// void getCountAndSortArray(int arr[], int size, int zeroCount, int oneCount){
//     for(int i = 0; i<size; i++){
//         if(arr[i] == zeroCount){
//             zeroCount++;
//         }
//         else{
//             oneCount++;
//         }
//     }
//     // yha s man lete hai zeroCount jo hai wo 3 hai and oneCount 4 hai okh!.. then abb 
//     // ek naya array banayge okkh!.. usme value insert karenge 0 and 1 okkh!..
//     for(int i = 0; i<zeroCount; i++) {
//            arr[i] = 0;
//     }

//     // simlary hame oneCount k liye bhi jo aray hoga uska dekhna padega 

//     for(int i = zeroCount; i<size; i++){
//         arr[i] = 1;
//     }

// }

// void print(int arr[], int size){
//     for(int i = 0; i<size; i++){
//         cout << arr[i] << " ";
//     }
// }

// int main(){
//     int arr[] = {0,1,1,0,1,0,1};
//     int size = 7;
//     int zeroCount = 0;
//     int oneCount = 1;

//   getCountAndSortArray(arr, size, zeroCount, oneCount);
//   print(arr, size);
   
//    return 0;
// }

// iski t.c jo hai wo O(N) and s.p O(N) hai okkh!..
// mai kahi built in function ka use krta dikh jau like sort() to iska O(NlogN) hai okkh!...

// #include <iostream>
// #include <algorithm>
// using namespace std;

// void getSorted(int arr[], int size){
//     sort(arr, arr+size);
// }

// void print(int arr[], int size){
//     for(int i = 0; i<size; i++){
//         cout << arr[i] << " ";
//     }
// }

// int main(){
//     int arr[] = {0,0,1,1,1,0,0};
//     int size = 7;

//     getSorted(arr, size);
//     print(arr, size);
//     return 0;
// }

// iski T.C hai wo {Ologn} hai and S.C jo hai wo O(N) hai okkkh!...

// #include <iostream>
// #include <algorithm>
// using namespace std;

// void getSorted(int arr[], int size, int zeroCount, int oneCount){
//     for(int i = 0; i<size; i++){
//          if(arr[i] == 0){
//             zeroCount++;
//          }
//          else{
//             oneCount++;
//          }
//     }
//     // yha s mughe generally zero and one mil jayega kitne hai and then uske according hi new arrays ban jaeyag okkh!..

//     for(int i = 0; i<zeroCount; i++){
//          arr[i] = 0;
//     }

//     for(int i = zeroCount; i<size; i++){
//         arr[i] = 1;
//     }
// }

// int main(){
//      int arr[] = {0,0,1,1,1,0,0};
//      int size = 7;
//      int zeroCount = 0;
//      int oneCount = 0;

//      getSorted(arr, size, zeroCount, oneCount);

//      for(int i = 0; i<size; i++){
//         cout << arr[i] << " ";
//      }
     
//      return 0;
// }

// iski jo t.c hogi wo generally O(n) and O(n) hog i okkh!...

// Abb yha s pairing wale question's ayenge okkh!...

//  #include <iostream>
//  #include <algorithm>
//  using namespace std;

//  void PrintPair(int arr[], int size){
//       for(int i = 0; i<size; i++){
//          for(int j = size-1; j> i; j--){
//             cout << arr[i] << " "<<  arr[j] << endl;
//          }
//       }
//  }


//  int main(){
    
//     int arr[] = {10,20,30};
//     int size = 3;
     
//     PrintPair(arr, size);

//     return 0;
//  }
 
// ek jo hota hai like pure pair print karne k liye wo 
// kuch is tarah s karte hai for(int i = 0; i<size; i++){int j = 0; j<size; j++}; ise kuch ho jata hia okkh!...

// but mughe lower traiangle print karna hai to kaise karnge 
// wo mughe like aise karna padega for(int i = 0; i<size; i++){int j=i; j<size; j++} isse print hoga tera lower triangle.. okkh!..


// upper trainle ka hi ek bar dekhio kaise print hoga wo okkh..


// above traible print karna hoga to mughe actaully ye karna padega like...
// for(int i = 0; i<size; i++){int j = 0; j<i; j++} isse avove k teen element print ho jayenge okkh...

// but in case mughe above k sare elemnet print karne hue jaise 2nd case m dikha tha lower elemnet m waisa krna pda agr to ye hai.
// for(int i = 0; i<size; i++){int j = 0; j<=i; j++} to isse mai sara element print kar lunga okkh!... above wala okkh!...

// condition 4th for(int i = 0; i<n; i++){int j = n-1; j>=0; j++} isme kuch alg aa rha hai path rha hai okkh...

// condition 5th for(int i = 0; i<n; i++){int j = n-1; j>i; j--} iska dry run khud s ek bar okkh and 10,30  20 30 10 20 ye aa rha hai okkh!..


// Two sum question... traget 35,
// #include <iostream>
// using namespace std;

// bool getTarget(int arr[], int target, int size){
//     for(int i = 0; i<size; i++){
//        for(int j = 0; j<size; j++){
//          if(arr[i] + arr[j] == target){
//              return true;
//          }
//          else{
//             return false;
//          }
//        }
//     }
//     return false;
// }

// int main(){
//     int arr[] = {10,20,30,40,50};
//     int target = 90;
//     int size = 5;

//     bool ans = getTarget(arr, target, size);
//     if(ans){
//        cout << "Ans found successfully!" << " ";
//     }
//     else{
//        cout<< "Ans not found";
//     }
//     return 0;
// }

// in case mere pass pair wala lana ho to kaise karnege okkh!...

// #include <iostream>
// #include <algorithm>
// using namespace std;

// pair<int, int> getTargetPair(int arr[], int target, int size){
//       pair<int, int> p = make_pair(-1,-1);
//       // agar pair nahi mila to ye return hoga like -1, -1 okkh!...s
//       for(int i = 0; i<size; i++){
//          for(int j = 0; j<size; j++){
//              if(arr[i] + arr[j] == target){
//                   p.first = arr[i];
//                   p.second = arr[j];

//                   return p;
//              }
//          }
//       }
//       return p; // yha s hame -1 and -1 milega okkh!...s
// }

// int main(){
//    int arr[5] = {10,20,30,40,50};
//    int target = 90;
//    int size = 5;
//    pair<int, int> ans = getTargetPair(arr, target, size);
//    cout << "Ans found " << ans.first << " " << ans.second << endl;

//    return 0;
// }

// t.c jo hai wo O(n*2) hoga okkh!...

// target find out karne hote hai like in pair wale question's mai ye kaise karenge okkh!...
// Ye 4 standard hai findOut karne k okkh! pair. leetcode pe hai ye sare question okkh!..
// T/F wala ata hai ek..
// pair<int, int> ye pair return karta hai ..
// Array wala bhi ata hai ek ye array return karega 
// All pair print wala bhi ata hai ek..


//Print all triplet..

#include <iostream>
#include <algorithm>
using namespace std;

void printAllTriplet(int arr[], int size){
     int count = 0;
     for(int i = 0; i<size; i++){
       for(int j= 0; j<size; j++){
          for(int k = 0; k<size; k++){
              cout << arr[i] << " " << arr[j] << " " << arr[k] << " " << endl;
              count++;
          }
       }
     }
     cout << count << endl;
}

int main() {
   int arr[] = {10,20,30,40};
   int size = 4;
   printAllTriplet(arr, size);

   return 0;
}

//T.c (n*3) n cube sapece complexity = O(1) constant space

// Haan bhai 👌 tumne sahi pakda.
// Jab bhi tum extra data structure (array, vector, map, set, stack, queue, dp table, etc.) 
//banate ho jiska size input ke n pe depend karta hai, tabhi O(n) space complexity aayegi.

// hamm kahi bhi agar extra sapce lete hai like array db stack queue set map vector etc;

//Two sum leetcode question..
// Example 1:

// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
// Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
// Example 2:

// Input: nums = [3,2,4], target = 6
// Output: [1,2]
// Example 3:

// Input: nums = [3,3], target = 6
// Output: [0,1]

// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//          vector<int> ans; // extar space O(n) complexity de dega okkh!..
//          for(int i = 0; i<nums.size(); i++){
//              for(int j = i+1; j<nums.size(); j++){
//                  if(nums[i] + nums[j] == target){
//                     ans.push_back(i);
//                     ans.push_back(j);
//                  }
//              }
//          }
//          return ans;
//     }
// };

// T.C O(n*2) and S.C O(n) bcz of extra space;

// Triple sum wala question ayega abb yah p okkh!...

#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> getTarget(int arr[], int size, int target){
     vector<vector<int>> ans; // ye 2d wala hai okkh! like [[]] first wala jo hai wo ans wala arrays hai that's why vector<vector<int>> this..

     for(int i = 0; i<size; i++){
       for(int j = i+1; j<size; j++){
          for(int k = j+1; k< size; k++){
              // yha p mugeh dublicate nahi chaiye that's why i+1 s start kar rha hu okkh!..
               if(arr[i] + arr[j] + arr[k] == target){
                  // in case ye target eqaul mil gya to mughe array m store karna hai okkh!..
                  vector<int> temp;
                  temp.push_back(arr[i]);
                  temp.push_back(arr[j]);
                  temp.push_back(arr[k]);
                  // abb ye jo hai [i, j, k] ayega okkh! temp wala..
                  // abb temp jo hai usko arry m push kardo okh!..
                  ans.push_back(temp);
                  return ans;
               }
          }
       }
     }
     return ans;
}

int main(){
   int arr[] = {10,20,30,40};
   int size = 4;
   int target = 4;
    
   vector<vector<int>> ans = getTarget(arr, size, target);   
   return 0;
}

// Space complexity jo hai iski jo O(m) ayegi bcz ans ka jo array hai wo ruk hi nahi rha hai that's why..
// Time Comp O(n*3) okkh!..


// IMP*** QUESTION...   Rotate of an array... shifting of an array...

//There are three step to solve this 
// 1.store last n element in a temp array..
// 2. shift all element by n places.  jo bacha hua hai usko aage karo okkh!..
// 3. copy temp array into original array.. 


// matlb simple sa ye hai like ki jitne shift karne hai utno ko store karo kahi 
// then shift karo remianing element ko usi array me then copy kar do whi temp wala elemnt..

