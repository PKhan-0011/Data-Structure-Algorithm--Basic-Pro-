//Peak Element 01,

// #include <iostream>
// using namespace std;

// int maxValue(int arr[], int size, int ansIndex){
//     int s = 0;
//     int e = size-1;
//     int mid = s + (e-s)/2;

//     while(s <= e){
//         if(arr[mid] < arr[mid+1]){
//              s = mid + 1;
//         }
//         else{
//             ansIndex = mid;
//             e = mid-1;
//         }
//         mid = s + (e-s)/2;
//     }
//     return ansIndex;
// }

// int main(){
//     int arr[] = {1,2,1,3,5,6,4};
//     int size = 7;
//     int ansIndex = -1;
     
//     int value = maxValue(arr, size, ansIndex);
//     cout << value << endl;

//     return 0;
// }

// Pivot index nikalana hai!..;

// #include <iostream>
// using namespace std;

// int pivotIndex(int arr[], int size){
//      int s = 0;
//      int e = size -1;
//      int mid = s + (e-s)/2;

//      while(s <= e){
//         if(arr[mid] > arr[mid+1]){
//             return mid;
//         }
//         else if (arr[mid-1] > arr[mid]){
//             return mid-1;
//         }
//         else if(arr[s] > arr[mid]){
//             // iska mtlb ye hai ki hamm 2nd line mai hai piche aao;
//             e = mid-1;
//         }
//         else{
//             s = mid+1;
//         }
//         mid = s + (e-s)/2;
//      }
//      return -1;
// }

// int main(){
//   int arr[] = {40,50,60,10,20,30};
//   int size = 6;

//   int value = pivotIndex(arr, size);
//   cout << value << endl;

//   return 0;
// }

// 2d arrays wala question bhi ata hai ek like;

// #include <iostream>
// using namespace std;

// bool searchValueIn2D(int arr[], int size, int n, int target){
//     int s = 0;
//     int e = size-1;
//     int mid = s + (e-s)/2;
//     int row = arr.size();
//     int col = arr[0].size();

//     while(s <= e){
//        int rowIndex = mid/col;
//        int colIndex = mid%col;

//        if(arr[rowIndex][colIndex] == target){
//              return true;
//        }
//        else if(arr[rowIndex][colIndex] > target){
//                 e = mid-1;
//        }
//        else{
//         s = mid + 1;
//        }
//        mid = s + (e-s)/2;
//     }
//     return false;
// }

// int main(){
//     int arr[] = {};
//     int size = 8;
//     int n = size + 1;

//     bool ans = searchValueIn2D(arr, size, n, target);
//     if(ans){
//         return true;
//     }
//     else{
//         return false;
//     }

//     return 0;
// }

// is above case m agar hamm 2d-1d nikalte hai to c*i + j karne padega 
// and in case mughe agar 1d-2d m convert karna hua to mai i = mid/col, j = mid%col kar dunga and 
// in case of search in 2d wale m mai rowIndex and colIndex find karunag pehel thik hai taki mid nikle uske according m chize thik karunag;
