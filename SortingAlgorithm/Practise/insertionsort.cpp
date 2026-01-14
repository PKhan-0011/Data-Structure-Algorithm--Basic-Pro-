// arrays hai hamare pass {44, 33, 55, 22, 11};

#include <iostream>
using namespace std;

void InsertionSort(int arr[], int size){
      for(int i = 1; i<size; i++){
           int key = arr[i];

           int j = i-1;

           while(j >= 0 && arr[j] > key){
                 arr[j+1] = arr[j];
                 j--;
           }
           arr[j+1] = key;
      }
}


int main() {
    int arr[] = {44, 33, 55, 22, 11};
    int size = 5;

    InsertionSort(arr, size);

    for(int i = 0 ; i<size; i++){
         cout << arr[i] << " ";
    }
    return 0;
}
