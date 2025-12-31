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


#include <iostream>
using namespace std;

void getRotatedArrayByAntiClock(int arr[][3], int rowSize, int colSize){
      // first step jo hota hai wo transpose ka hota hai okkh!.
      for(int i=0; i<rowSize; i++){
         for(int j = i; j<colSize; j++){
               swap(arr[i][j], arr[j][i]);
         }
      }

      // iske swap hone k baad array!>.
      for(int i = 0; i<rowSize; i++){
        for(int j = 0; j<colSize; j++){
              cout << arr[i][j] << " ";
        }
        cout << endl;
     }

     // ye abovev wala to dekh wo like na transpose ho chukka hai sahii s kkkh abb mugeh siko 90* anticlock wise rotate karna hai okh!..
      
     for(int j = 0; j<colSize; j++){
             int top = 0; int bottom = rowSize-1;
             while(top < bottom){
                 
                   swap(arr[top][j], arr[bottom][j]);
                   top++;
                   bottom--;
             }
        }
      
         for(int i = 0; i<rowSize; i++){
        for(int j = 0; j<colSize; j++){
              cout << arr[i][j] << " ";
        }
        cout << endl;
     }


}

int main(){
     int arr[3][3] = {
                  {1,2,3},
                 {4,5,6},
                 {7,8,9}
     };

     int rowSize = 3;
     int colSize = 3;
     
     getRotatedArrayByAntiClock(arr, rowSize, colSize);

     return 0;
}

// agar antiClock wise reverse karna hoga to mai aise above wale s karunga okkh and iski t.c O(n^2) hogi okkh!..
