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

#include <iostream>
using namespace std;

// ye dhyan rakhio bass like ki ye 4 jo diiya hai hamne iisko dena jarrori hota hai bcz isse hi hamm 2-d s 1-d m convert karte 
// hai and then fir wha s target findout karna hota hai okkh!>.

bool getAnswer(int arr[][4], int rowSize, int colSize, int target){
      // mughe na arr[][] second wale m mughe col ka size dena hi padta hia okkh! bcz tabhi ye 2-d 1-d m change honge 
      // answer findout karega like c*i+j c = number of columns!/..
     
      for(int i = 0; i<rowSize; i++){
          for (int j = 0; j< colSize; j++){
              if(arr[i][j] == target){
                   return true;
              }
          }
    }
     return false;
}

int main () {
    int arr[3][4] = {
                  {10,11,12,13},
                  {20,21,22,23},
                  {31,32,33,34},
    };  
    
    int rowSize = 3;
    int colSize = 4;
    int target = 33;
    
    
    bool ans = getAnswer(arr, rowSize, colSize, target);

    if(ans){
         cout << "target found!" << " ";
    }
    else{
         cout << "Target not found!" << " "; 
    };
 
    return 0;
}