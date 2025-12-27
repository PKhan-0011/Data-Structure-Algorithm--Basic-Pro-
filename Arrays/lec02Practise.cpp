// Yha p 2nd lecture k hi code ayenge inko hi kar sahi s!..

// single number ayega 

// #include <iostream>
// using namespace std;

// void getSingleNumber(int arr[], int size){
//     int ans = 0;

//     for(int i = 0; i<size; i++){
//          ans = ans^arr[i];
//     }
//     cout << ans;
// }

// int main() {
//      int arr[] = {1,2,3,3,2};

//      int size =5;

//      getSingleNumber(arr, size);

//     return 0;
// }

// abb yha p hamm sort 0's and 1's ayega sort 0's 1's and 2's ayega (dutch national flag lenge), flip 0's and 1's aur 0-1 aise lenge okkh!
// aur uske badd 2nd compliment bhi  dekhenge okkh!..

// #include <iostream>
// #include <algorithm>
// #include <limits.h>
// using namespace std;

// void getSortedArray(int arr[], int size){
//      int zeroCount = 0;
//      int oneCount = 0;

//      for(int i = 0; i<size; i++){
//           if(arr[i] == 0){
//             zeroCount++;
//           }
//           else if(arr[i] == 1){
//              oneCount++;
//           }
//      }

//      // yha s mugeh zeroCount and oneCount pta chl jayega ki ye kitne hai okh!..
    
//      for(int i = 0; i<zeroCount; i++){
//           arr[i] = 0; // same array hai ye okkh!.. usi array m 3 jagah 0 rakh do okkh!..
//      }

//      for(int i =zeroCount; i<size; i++){
//           arr[i] = 1;
//      }
// }


// int main () {
//     int arr[7] = {0,1,1,0,0,1,1};
//     int size = 7;
    
//    // sort(arr, arr+size); // but iski t.c bhut zada hai okkh!.. 0(nlogn); 

//     // but agar mughe O(n) mai karna hoga to mai kuch aise karunga kuch extra space ya extra arrys nhi lena uss array m hi 
//     // chize karni hai okkh!.. zeroCount and oneCount karke uss array ko modify kardo okkh!..

//     getSortedArray(arr, size);

//     for(int i = 0; i<size; i++){
//         cout << arr[i] << " ";
//     }

//      return 0;
// }

// ek ata hia 2 sum question like ek array hai 10, 20, 30, 40; target = 30;

// #include <iostream>
// using namespace std;


// pair<int, int> getTarget(int arr[], int size, int target){
//      pair<int, int> p = make_pair(-1, -1);
//      for(int i = 0; i<size; i++){
//         for(int j = 0; j<size; j++){
//             if(arr[i] + arr[j] == target){
//                 p.first = arr[i];
//                 p.second = arr[j];
//                 cout << i << " " << j << endl; 
//                 return p;
//             }
//         }
//      }
//      // iska generally matlb ye hota hai ki hame data mila hi nahi hai okkh!... hamm yha tak aa gye hai 
//      // but data hame nahi mila!.. to fir ye -1, -1, return hoga okkh!..
//      return p;
// }

// int main() {
//    int arr[4] = {10,20,30,40};
//    int size = 4;
//    int target = 30;
   
//    // yha p 2 data ayega like ek boolean m and another wala ek pair m ayega okkh!..

//    pair<int, int> ans = getTarget(arr, size, target);

//    // yha p ye do chize ayegi like and mai agar true hoag to okkh! like (10,20) and (20,10) ye ayega okkh!
//    // isko kaise print karunga wo dekh le okkh!..

//    cout << ans.first << endl;
//    cout << ans.second << endl;

//    return 0;

// }

// print all triplets!..

// #include <iostream>
// using namespace std;

// void getAllTriplet(int arr[], int size){
//    int count = 0;
//    for(int i = 0; i<size; i++){
//       for(int j = 0; j<size; j++){
//            for(int k = 0; k<size; k++){
//                 cout << arr[i] << " " << arr[j] << " " << arr[k] << endl;
//                 count ++;
//            }
//       }
//    }
//    cout << count << " ";
// }

// int main () {
    
//    int arr[4] = {10,20,30,40};
//    int size = 4;
    
//    getAllTriplet(arr, size);

//      return 0;
// }

// ek mera three sum ata hai iskp dhyan s karne ki koshish karioo kya hai ye okkh!.

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


vector<vector<int>> getThreeSum(vector<int> &arr, int size, int target){
      vector<vector<int>> ans01; // ye empty array liya hai hamne okkh! isme mughe data push karna hai!.with indexing jo jo mere pass hai index based okkh!..
      for(int i = 0; i<size; i++){
           for(int j = 0; j<size; j++){
             for(int k = 0; k<size; k++){
                   if(arr[i] + arr[j] + arr[k] == target){
                       vector<int> temp; // temp array bane ga ekk okkh!..
                       // abb temp array me ye data dalo okkh,..
                       temp.push_back(arr[i]); 
                       temp.push_back(arr[j]); 
                       temp.push_back(arr[k]);
                       ans01.push_back(temp);
                       return ans01;
                   }
             }
           }
      }
      return ans01;
}

int main (){
    vector<int> arr = {10, 20, 30, 40};
    int size = 4;
    int target = 60;
    vector<vector<int>> ans = getThreeSum(arr, size, target);
    
    // agar mugeh data dekhna hoga to mai uske upar ek opreration perform karunga okkh!
    // jisse hamm data findout kar llenge okkh!.. loop jaise lagate the na arry mai waise hi yha bhi loop lgaynege okkh!..

   for(auto val : ans){
       for(auto getOriginalVal: val){
           cout << getOriginalVal << " ";
       }
   }

   return 0;
}