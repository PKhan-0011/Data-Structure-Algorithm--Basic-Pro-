// merge interval's 
// merge two sorted array...
#include <iostream>
#include <vector>
using namespace std;

void mergeTwoArray(int arr[], int arrSize, int brr[], int brrSize, vector<int> &ans){
      int i = 0;
      int j = 0;

      while(i < arrSize && j < brrSize){
            if(arr[i] > brr[j]){
                  ans.push_back(brr[j]);
                  j++;
            }
            else{
            ans.push_back(arr[i]);
             i++;
            }
      }
     
      while(i < arrSize){
           ans.push_back(arr[i]);
           i++;
      }
      while(j < brrSize){
           ans.push_back(brr[j]);
           j++;
      }
}

int main(){
     int arr[] = {20,40,60,70,80};
     int arrSize = 5;

     int brr[] = {10, 30, 50, 90, 100, 110};
     int brrSize = 6;

     vector<int> ans;
     mergeTwoArray(arr, arrSize, brr, brrSize, ans); 
     
     for(auto i: ans){
          cout << i << " " ;
     }

    return 0;
}
