#include <iostream>
using namespace std;

// selection sort mai hamm do element ko select karte hai and usko swap karte hai acoording to 
// bigger and smaller okh!..

void getSortedArrayBySelectionSort(int arr[], int size){
    for(int i = 0; i<size-1; i++){
            int ansIndex = i;
         for(int j = i+1; j< size; j++){
              if(arr[j] < arr[ansIndex]){
                  ansIndex = j;
              }
         }
         swap(arr[ansIndex], arr[i]);
    }  
}

void printArray(int arr[], int size){
         for(int i = 0; i<size; i++){
             cout << arr[i] << " "; 
         }
     };

int main() {
    int arr[] = {44,33,55,22,11};
    int size = 5;
     
     getSortedArrayBySelectionSort(arr, size);

     printArray(arr, size);

    return 0;
}

// selection sort okkh!.. doo element ko select and jo chota hoga use comapare karke swicth kardo okkh!..

