// first hashMap wale question ate hai okkh!..

// second 2's compliment wale questions.;

// third Rotate an array by 90* leetcode 48;

 #include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;

void getTranspose(int arr[][3], int rowSize, int colSize){

     for(int i=0; i<rowSize; i++){
         for(int j = i; j<colSize; j++){
              swap(arr[i][j], arr[j][i]);
         }
     }

     for(int i = 0; i<rowSize; i++){
           reverse(arr, arr+rowSize);   
       }

       // ye above wala line mughe smjh nahi aye todha sahi s okkh! ki hamm 
       // hmm row p kasie traverse kar rhe hai okkh!..
     
     for(int i = 0; i<rowSize; i++){
        for(int j = 0; j<colSize; j++){
              cout << arr[i][j] << " ";
        }
        cout << endl;
     }
};

int main () {

    int arr[3][3] = {
                 {1,2,3},
                 {4,5,6},
                 {7,8,9}
    };

    int rowSize = 3;
    int colSize = 3; 

     for(int i = 0; i<rowSize; i++){
        for(int j = 0; j<colSize; j++){
              cout << arr[i][j] << " ";
        }
        cout << endl;
     }

     cout << "After swap" << endl;
    
    getTranspose(arr, rowSize, colSize);

    return 0;
}