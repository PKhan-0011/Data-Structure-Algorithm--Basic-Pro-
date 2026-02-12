//1. Print an array!..
#include <iostream>
using namespace std;

void printRecursiveArray(int arr[], int size, int index){
      // base case
      if(index == size){
          // iska mt;b ye hai ki ye last tak pahuch gya hai okkh!..

          return;
      } 
      cout << arr[index] << " ";
      printRecursiveArray(arr, size, index+1);
}

int main(){
    int arr[5] = {10,20,30,40,50};
    int size = 5;
    int index = 0;

    printRecursiveArray(arr, size, index);

    return 0;
}

// 2.search in array!.  target = 50;
#include <iostream>
using namespace std;

bool printRecursiveArray(int arr[], int size, int index, int target){
      // base case
      if(index == size){
          // iska mt;b ye hai ki ye last tak pahuch gya hai okkh!..

          return false;
      } 
      
      else if(arr[index] == target){
        return true;
      }

      printRecursiveArray(arr, size, index+1, target);
}

int main(){
    int arr[5] = {10,20,30,40,50};
    int size = 5;
    int index = 0;
    int target = 50;

    bool ans = printRecursiveArray(arr, size, index, target);

   cout << ans ? "" : "";

    return 0;
}

// 3.odd number wala print karna hai sare okkh!.
#include <iostream>
using namespace std;

void OddValue(int arr[], int size, int index){
   // base case
   if(index == size){
      return;
   }
    
   // ek case mai dekhta hu baki recrsion will handle!..
   if(arr[index] % 2 != 0){
       cout << arr[index] << " ";
   }
   
   OddValue(arr, size, index+1);
}

int main() {
    
    int arr[5] = {10,13,23,40,50,};
    int size = 5;
    int index = 0;

    OddValue(arr, size, index);

    return 0;
}

// 4.even agar niklna hoga to kaise nikalunga okkh!..
#include <iostream>
using namespace std;

void EvenValue(int arr[], int size, int index){
   // base case
   if(index == size){
      return;
   }
    
   // ek case mai dekhta hu baki recrsion will handle!..
   if(arr[index] % 2 == 0){
       cout << arr[index] << " ";
   }
   
   EvenValue(arr, size, index+1);
}

int main() {
    
    int arr[5] = {10,13,23,40,50,};
    int size = 5;
    int index = 0;

    EvenValue(arr, size, index);

    return 0;
}

// 5.maximum value in an array by recusrion!..
#include <iostream>
#include <climits>
using namespace std;

void maxiimumValueInRecursiveArray(int arr[], int size, int index, int &maxi){
      // base case
      if(index == size){
          // iska mt;b ye hai ki ye last tak pahuch gya hai okkh!..

          return;
      } 
     
      int value = arr[index];

      maxi = max(maxi, value);

      maxiimumValueInRecursiveArray(arr, size, index+1, maxi);

      cout << maxi << " ";
}

int main(){
    int arr[5] = {10,20,30,40,50};
    int size = 5;
    int index = 0;
     
    int maxi = INT_MAX;

   maxiimumValueInRecursiveArray(arr, size, index, maxi);

   //cout << maxi << " ";

    return 0;
}

// 6.minimum value in an array by recusrion!..
#include <iostream>
#include <climits>
using namespace std;

void manimumValueInRecursiveArray(int arr[], int size, int index, int &mani){
      // base case
      if(index == size){
          // iska mt;b ye hai ki ye last tak pahuch gya hai okkh!..

          return;
      } 
     
      int value = arr[index];

      mani = min(mani, value);

      manimumValueInRecursiveArray(arr, size, index+1, mani);

      cout << mani << " ";
}

int main(){
    int arr[5] = {10,20,30,40,50};
    int size = 5;
    int index = 0;
     
    int mani = INT_MIN;

   manimumValueInRecursiveArray(arr, size, index, mani);

   //cout << maxi << " ";

    return 0;
}

// 7. print all digit of an number!..
#include <iostream>
using namespace std;

void printDigit(int n){
   
    // base case ayega yha p okkh!.
    if(n == 0){
        return; // isak matlb ye hai ki kuch bacha hi nahi hai! sab zero ho rkha hai okkh!..
    }
    
    int digit = n % 10; // isse last value nikl rahi hai okkh!..

    printDigit(n/10); // isse delete ho rha hai 

    cout << digit << " ";
}

int main() {
    
    int n = 219780;

    printDigit(n);

    return 0;
}
