// first hashMap wale question ate hai okkh!..

// second 2's compliment wale questions.;

// third Rotate an array by 90* leetcode 48;

//  #include <iostream>
// #include <algorithm>
// #include <unordered_map>
// using namespace std;

// void getTranspose(int arr[][3], int rowSize, int colSize){

//      for(int i=0; i<rowSize; i++){
//          for(int j = i; j<colSize; j++){
//               swap(arr[i][j], arr[j][i]);
//          }
//      }

//      for(int i = 0; i<rowSize; i++){
//            reverse(arr, arr+rowSize);   
//        }

//        // ye above wala line mughe smjh nahi aye todha sahi s okkh! ki hamm 
//        // hmm row p kasie traverse kar rhe hai okkh!..
     
//      for(int i = 0; i<rowSize; i++){
//         for(int j = 0; j<colSize; j++){
//               cout << arr[i][j] << " ";
//         }
//         cout << endl;
//      }
// };

// int main () {

//     int arr[3][3] = {
//                  {1,2,3},
//                  {4,5,6},
//                  {7,8,9}
//     };

//     int rowSize = 3;
//     int colSize = 3; 

//      for(int i = 0; i<rowSize; i++){
//         for(int j = 0; j<colSize; j++){
//               cout << arr[i][j] << " ";
//         }
//         cout << endl;
//      }

//      cout << "After swap" << endl;
    
//     getTranspose(arr, rowSize, colSize);

//     return 0;
// }

// ek aur ata hai rotate an image of an 2-d array!..


// #include <iostream>
// using namespace std;

// void getRotatedArrayByAntiClock(int arr[][3], int rowSize, int colSize){
//       // first step jo hota hai wo transpose ka hota hai okkh!.
//       for(int i=0; i<rowSize; i++){
//          for(int j = i; j<colSize; j++){
//                swap(arr[i][j], arr[j][i]);
//          }
//       }

//       // iske swap hone k baad array!>.
//       for(int i = 0; i<rowSize; i++){
//         for(int j = 0; j<colSize; j++){
//               cout << arr[i][j] << " ";
//         }
//         cout << endl;
//      }

//      // ye abovev wala to dekh wo like na transpose ho chukka hai sahii s kkkh abb mugeh siko 90* anticlock wise rotate karna hai okh!..
      
//      for(int j = 0; j<colSize; j++){
//              int top = 0; int bottom = rowSize-1;
//              while(top < bottom){
                 
//                    swap(arr[top][j], arr[bottom][j]);
//                    top++;
//                    bottom--;
//              }
//         }
      
//          for(int i = 0; i<rowSize; i++){
//         for(int j = 0; j<colSize; j++){
//               cout << arr[i][j] << " ";
//         }
//         cout << endl;
//      }


// }

// int main(){
//      int arr[3][3] = {
//                   {1,2,3},
//                  {4,5,6},
//                  {7,8,9}
//      };

//      int rowSize = 3;
//      int colSize = 3;
     
//      getRotatedArrayByAntiClock(arr, rowSize, colSize);

//      return 0;
// }

// agar antiClock wise reverse karna hoga to mai aise above wale s karunga okkh and iski t.c O(n^2) hogi okkh!..

// Maximum subArray nums =  [-2,1,-3,4,-1,2,1,-5,4];

#include <iostream>
#include <climits>
using namespace std;

int getMaximum(int arr[], int size) {
       int ans = INT_MIN;
       for(int i = 0; i<size; i++){
           int sum = 0;  // iska sum mai yha p define isliye kar rha hu bcz jab bhi mera i increse hoga tan sum = 0 ho ojayega okkh!.. 
        for(int j = i; i<size; j++){
              sum += arr[j];
              ans = max(ans, sum);
        }
        cout << sum << endl;
       }
       cout << ans << endl;
       return ans;
}

int main () {
    int arr[9] =  {-2,1,-3,4,-1,2,1,-5,4};

    // issme actaully hame karna ye hota hai like ki sum of maximum subArray findout karna hota hai okh!..
    // to ek loop lagega outer and inner dono okkh!.. and mughe har ek arart k sum ko coompare karke niklana
    // hota maimm findout karna 
    // hota hai okkh!>.
     
    int size = 9;

    int ans02 = getMaximum(arr, size);

    cout << ans02 << endl;

    return 0;
}

// isko karne s tle aa rhi hia okkh!..

// iska best solution hoga kaden's algorithm..;
// and kaden's algo ka t.c O{n} hota hai okkh!..

