// prefix sum!..

#include <iostream>
#include <vector>
using namespace std;

void PrefixSum(vector<int> arr, int size){
      vector<int> PrefixArray(size);
      PrefixArray[0] = arr[0];
      for(int i = 1; i<size; i++){
          PrefixArray[i] = PrefixArray[i-1] + arr[i];
      }
      for(int i = 0; i< PrefixArray.size(); i++) {
           cout << PrefixArray[i] << " ";
      }   
};

void SuffixSum(vector<int> arr, int size){
    vector<int> suffixArray(size);
    suffixArray[size-1] = arr[size-1];

    for(int i = size-2; i >= 0; i--){
         suffixArray[i] = suffixArray[i+1] + arr[i];
    }

     for(int i = 0; i< suffixArray.size(); i++) {
           cout << suffixArray[i] << " ";
      }   
}


int main(){
    vector<int> arr = {5,6,7,8,9};
    int size = arr.size();

    PrefixSum(arr, size);
    SuffixSum(arr, size);
    
//    CompareArray(arr, size);

    return 0;
}

// ye above wala optimize nahi hai okkh!..
// isko optimize tughe karna hai like kcuh idea leke okkh!..

