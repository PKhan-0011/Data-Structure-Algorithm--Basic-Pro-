// Yha p 2nd lecture k hi code ayenge inko hi kar sahi s!..

// single number ayega 

// #include <iostream>
// using namespace std;

// void getSingleNumber(int arr[], int size){
//     int ans = 0;

//     for(int i = 0; i<size; i++){
//          ans = ans^arr[i];
//     }
//     cout << ans;
// }

// int main() {
//      int arr[] = {1,2,3,3,2};

//      int size =5;

//      getSingleNumber(arr, size);

//     return 0;
// }

// abb yha p hamm sort 0's and 1's ayega sort 0's 1's and 2's ayega (dutch national flag lenge), flip 0's and 1's aur 0-1 aise lenge okkh!
// aur uske badd 2nd compliment bhi  dekhenge okkh!..

#include <iostream>
#include <algorithm>
#include <limits.h>
using namespace std;

void getSortedArray(int arr[], int size){
     int zeroCount = 0;
     int oneCount = 0;

     for(int i = 0; i<size; i++){
          if(arr[i] == 0){
            zeroCount++;
          }
          else if(arr[i] == 1){
             oneCount++;
          }
     }

     // yha s mugeh zeroCount and oneCount pta chl jayega ki ye kitne hai okh!..
    
     for(int i = 0; i<zeroCount; i++){
          arr[i] = 0; // same array hai ye okkh!.. usi array m 3 jagah 0 rakh do okkh!..
     }

     for(int i =zeroCount; i<size; i++){
          arr[i] = 1;
     }
}


int main () {
    int arr[7] = {0,1,1,0,0,1,1};
    int size = 7;
    
   // sort(arr, arr+size); // but iski t.c bhut zada hai okkh!.. 0(nlogn); 

    // but agar mughe O(n) mai karna hoga to mai kuch aise karunga kuch extra space ya extra arrys nhi lena uss array m hi 
    // chize karni hai okkh!.. zeroCount and oneCount karke uss array ko modify kardo okkh!..

    getSortedArray(arr, size);

    for(int i = 0; i<size; i++){
        cout << arr[i] << " ";
    }

     return 0;
}

