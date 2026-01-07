// search in nearly sorted array!, search in rotatted array,,

// int arr[] = {10, 3, 40, 20, 50, 70} key = 40; 
// output = 2;

#include <iostream>
using namespace std;

int getTarget(int arr[], int target, int n){
    int s = 0;
    int e = n-1;

    while(s <= e){
          int mid = s + (e-s)/2;

          if(arr[mid] == target){
              return mid;
          }
          else if (arr[mid + 1] == target){
              return mid + 1;
          }
          else if (arr[mid - 1] == target){
             return mid -1;
          }

          if(target > arr[mid]){
              s = mid + 1;
          }
          else {
             e = mid -1;
          }
    }
    return -1;
}

int main() {
    
    int arr[] = {10,3,40,20,50,70,80};
    int n = 7;
    int target = 80;

    int ans = getTarget(arr, target, n);

    cout << ans << " ";
    return 0;
}

// 2nd question!.. find Odd occurence!..