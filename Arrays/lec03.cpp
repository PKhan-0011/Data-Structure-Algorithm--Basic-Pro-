// Yha pe tera 2-d array ata hai likw 2-d array

// 2-d array ka intailization in array!;
// vector<vector<int>> ans(noOfRows, vector<int>(noOfCol, intailkization));

// #include <iostream>
// using namespace std;

// int main () {

//     int arr[3][2] = {
//                     {10,20},
//                     {20,30},
//                     {30,40},  
//     };

//     int rowSize = 3;
//     int colSize = 2;

//     for(int i = 0; i<rowSize; i++){
//          for(int j = 0; j<colSize; j++){
//               cout<< arr[i][j] << " ";
//          }
//          cout << endl; 
//     }


//     return 0;
// }

// // iske badd mughe traversal dekhna hota hia like row-wise column-wise and diaginal-wise traversal okkh!..
// // row-wise to normaly ho jayegi but column wise rectangular k liye col upar rakhte hai okkh!..

// #include <iostream>
// using namespace std;

// int main() {
//     int arr[3][2] = {
//                     {10,20},
//                     {20,30},
//                     {30,40},  
//     };

//     int rowSize = 3;
//     int colSize = 2;

//     for(int i = 0; i<rowSize; i++){
//           for (int j = 0; j< colSize; j++){
//               cout << arr[i][j] << " ";
//           }
//           cout << endl;
//     }
//     return 0;
// }

// // colwise traversal ayega tera yha p okkh!..

// #include <iostream>
// using namespace std;

// int main() {
//     int arr[3][2] = {
//                     {10,20},
//                     {20,30},
//                     {30,40},  
//     };

//     int rowSize = 3;
//     int colSize = 2;
    
//      for(int j = 0; j<rowSize; j++){
//           for (int i = 0; i< colSize; i++){
//               cout << arr[i][j] << " ";
//           }
//           cout << endl;
//     }
//     return 0;
// }

// diagonal traversal okkh !yha p ek check lagega like ki array agar tera col and row k barabar hua wahi print hoga okkh!..

// #include <iostream>
// using namespace std;

// int main() {
//     int arr[3][2] = {
//                     {10,20},
//                     {20,30},
//                     {30,40},  
//     };

//     int rowSize = 3;
//     int colSize = 2;
    
//      for(int i = 0; i<rowSize; i++){
//           for (int j = 0; j< colSize; j++){
//             if(i == j){
//                cout << arr[i][j] << " ";
//             }
//           }
//           cout << endl;
//     }
//     return 0;
// }

// searching of an element in an array!..

// #include <iostream>
// using namespace std;

// // ye dhyan rakhio bass like ki ye 4 jo diiya hai hamne iisko dena jarrori hota hai bcz isse hi hamm 2-d s 1-d m convert karte 
// // hai and then fir wha s target findout karna hota hai okkh!>. 

// bool getAnswer(int arr[][4], int rowSize, int colSize, int target){
//       // mughe na arr[][] second wale m mughe col ka size dena hi padta hia okkh! bcz tabhi ye 2-d 1-d m change honge 
//       // answer findout karega like c*i+j c = number of columns!/..
     
//       for(int i = 0; i<rowSize; i++){
//           for (int j = 0; j< colSize; j++){
//               if(arr[i][j] == target){
//                    return true;
//               }
//           }
//     }
//      return false;
// }

// int main () {
//     int arr[3][4] = {
//                   {10,11,12,13},
//                   {20,21,22,23},
//                   {31,32,33,34},
//     };  
    
//     int rowSize = 3;
//     int colSize = 4;
//     int target = 33;
    
    
//     bool ans = getAnswer(arr, rowSize, colSize, target);

//     if(ans){
//          cout << "target found!" << " ";
//     }
//     else{
//          cout << "Target not found!" << " "; 
//     };
 
//     return 0;
// }

// creating 2-d array by vector!..

// #include <iostream>
// #include <climits>
// #include <vector>
// using namespace std;

// normal array pass by ref hota hai but vector pass by value hota hai okkh!.. dhyan rakhio!..
// agar maine isko pass by ref pass nhai kiya to copy banegi actaully value m change nahi hoga okkh!.. 

// bool getTarget(vector<vector<int>> &arr, int target, int rowSize, int colSize){
//        for(int i = 0; i<rowSize; i++){
//            for(int j = 0; j<colSize; j++){
//                   if(arr[i][j] == target){
//                     return true;
//                   }
//            }
//        }
//        return false;
// }

// int getMinimumValue(int arr[][4], int rowSize, int colSize) {
      
//      int maxAns = INT_MIN;

//       for(int i = 0; i<rowSize; i++){
//            for(int j = 0; j<colSize; j++){
//                 if(maxAns < arr[i][j]){
//                      maxAns = arr[i][j];
//                 }
//            }
//       }
//       return maxAns;

//       cout << "data mila hi nahi hai okkh!.." << endl;
// }


// int main () {

//      int arr[3][4] = {
//                     {10,20,30,70},
//                     {40,50,60,100},
//                     {70,80,90, 2}

//      };

//      int rowSize = 3;
//      int colSize = 4;

//      int ans = getMinimumValue(arr, rowSize, colSize);

//      cout << ans << " ";

     // vector<vector<int>> arr  (3, vector<int>(4, 10));

     // int rowSize = arr.size();
     // int colSize = arr[0].size(); // yha p galati hoti hai like arr.size() kar deta hu mai balki mugeh yha p arr[0].size() kar dunag okkh!..

     // for(int i = 0; i<rowSize; i++){
     //       for(int j = 0; j<colSize; j++){
     //              cout << arr[i][j] << " ";
     //       }
     //       cout << endl;
     // }

     // int target = 10;
    
     // bool ans = getTarget(arr, target, rowSize, colSize);

     // if(ans) {
     //       cout << "find ho gya!.";
     // }
     // else{
     //       cout << "nahi mila hai ye okh!..";
     // }
     

//      return 0;
// }

// pass by value and pass by ref do chize hoti hai okh! 
// pass by value ka matlb ye hota hai ki copy banegi and pass by ref ka matlb actully value m change hoga okkh!.


// #include <iostream>
// #include <algorithm>
// using namespace std;


// void getRowSum(int arr[][3], int rowSize, int colSize){
//          // int sum = 0;  agar maine yha p intailize kar diya hia to sum upadte nahi hoga har row p
//          // aur wo sare row and column ke element ka sum nikla lega okkh!..
//        for(int i = 0; i<rowSize; i++){
//             int sum = 0; // isi liye mughe yha p lena padega okkh!.. sum okkh! jisse mai har row p summ upadte like 0 kar paunga and row wise calculate kar dunga summ okkh!>.
//            for(int j = 0; j<colSize; j++){
//                 sum += arr[i][j];
//            }
//            cout << sum << endl;
//        }
// }

// Column Wise Sum column ka uoar ayega and row ka nicche okh!.. and arr[row][col] ye revesre hota hia ye dhyan rahio okkh!..

// void diagonalTraversal(int arr[][3], int rowSize, int colSize){
//       int sum = 0;
//       for(int i = 0; i<rowSize; i++){
//            for(int j = 0; j<colSize; j++){
//                  if(i == j){
//                      sum += arr[i][j];
//                  }
//            }
//       }
//       cout << sum << endl; 
// };

//  void  ReserverDiagonalTraversal(int arr[][3], int rowSize, int colSize){
//         int sum = 0;
//         // yha p jo logic lagega wo i + j == m-1 hota hai where m = columnIndex okkh! 
//         for(int i= 0; i<rowSize; i++){
//            for(int j = 0; j<colSize; j++){
//                  if(i+j == colSize-1){
//                       sum += arr[i][j];
//                  }
//            }  
//         }
//         cout << sum << endl;
// };

// int main() {
     
//      int arr[3][3] = {
//                      {10,10,10,},
//                      {20,20,20},
//                      {30,40,30},
//      };

//      int rowSize = 3;
//      int colSize = 4;

//    //  getRowSum(arr, rowSize, colSize);
// //     // for column wise traversal hamm bass coolumn change kar denge okkh!. like 
//      //columnWiseTraversal(arr, rowSize, colSize);

//     // diagonal traversal okkh!..
//     //diagonalTraversal(arr, rowSize, colSize);

//     ReserverDiagonalTraversal(arr, rowSize, colSize);
    
//     return 0;
// };



// Transpose of a Mtarxi ayega yha p okh!..

#include <iostream>
using namespace std;

void getTransporseByDiffMatrix(int arr[][3], int rowSize, int colSize){
        // ek new array le lenge yha p and usme hamm transpose nikl denge okkh! 
        // but isme yahi dikkat hai ki space-comp aa jayegi isko like o(n) ki 

        int arr[100][100] = {0}; // size hamne random diya hai okkh!.

        for(int i = 0; i<rowSize; i++){
           for(int j = 0; j<colSize; j++){
                 arr[i][j] == arr[j][i];
           }
        }

        // yha p abb pura array aa jayega okh! usko traverse kar lo okkh!.

        for(int i = 0; i<rowSize; i++){
           for(int j = 0; j<colSize; j++){
                 cout << arr[i][j] << " ";
           }
           cout << endl;
        }
};

void getTransporseInSameMatrix(int arr[][3], int rowSize, int colSize){
          // mughe yha p same array s swap karna hai okkh and uske baad wahi array [print karna hai okkh!..
          
           for(int i = 0; i<rowSize; i++){
           for(int j = 0; j<colSize; j++){
                 swap(arr[i][j], arr[j][i]);
           }
        }

        // abb yha p wahi array jo swao hua hai usko traverse kar lo okkh!.

         for(int i = 0; i<rowSize; i++){
           for(int j = 0; j<colSize; j++){
                 cout << arr[i][j] << " ";
           }
           cout << endl;
        }

        // iski t.c n^2 hai but space.Comp o(1) hai okkh!..
}



int main (){
     int arr[3][3] = {
               {10,11,12},
               {13,14,15},
               {16,17,18},
     };


     int rowSize = 3;
     int colSize = 3;
     
     getTransporseByDiffMatrix(arr, rowSize, colSize);

     getTransporseInSameMatrix(arr, rowSize, colSize);

}