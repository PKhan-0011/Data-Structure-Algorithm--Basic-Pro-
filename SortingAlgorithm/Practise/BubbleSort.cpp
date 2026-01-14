// Aarray = [44,33,55,22,11];

// #include <iostream>
// using namespace std;

// void getSortedArray(int arr[], int size){
//     for(int i = 0; i<size-1; i++){
//          for(int j = 0; j< size-i-1; j++){
//               if(arr[j] > arr[j+1]){
//                  swap(arr[j], arr[j+1]);
//               }
//          }
//     }  
// }
 
// void printArray(int arr[], int size){
//          for(int i = 0; i<size; i++){
//              cout << arr[i] << " "; 
//          }
//      };

// int main() {
//     int arr[] = {44,33,55,22,11};
//     int size = 5;
     
//      getSortedArray(arr, size);

//      printArray(arr, size);

//     return 0;
// }


#include <iostream>
using namespace std;

void getSortedArray(int arr[], int size){
     for(int i = 0;i<size; i++){
      for(int j = 0; j<size-i-1; j++){
           if(arr[j] > arr[j+1]){
               swap(arr[j], arr[j+1]);
           }
        }
      }
}

int main () {
     int arr[] = {44, 33, 11, 22, 10};
     int size = 5;

     getSortedArray(arr, size);

     for(int i = 0; i<size; i++){
           cout << arr[i] << " ";
     }

     return 0;
}