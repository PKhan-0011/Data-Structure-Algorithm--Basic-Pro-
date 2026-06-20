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


// print an array by recusive method!...

#include <iostream>
using namespace std;

void   printAllArray(int arr[], int size, int index){
       if(index >= size){
            return;
       }
       // ek case mera baki recusrion will handle okkh!...

       cout << arr[index] << " ";
       printAllArray(arr, size, index+1);
}

int main() {
    int arr[] = {10,20,30,40,50};
    int size = 5;
    int index = 0;
    printAllArray(arr, size, index);

    return 0;
}

// search in a array!.. target hai like 50 okkh!..
#include <iostream>
using namespace std;

bool getValue(int arr[], int size, int index, int target){
       if(index >= size){
            return false;
       }
       // ek case mera baki recusrion will handle okkh!...

       // check ki target hai kya yha p!..
        
       if(arr[index] == target){
           return true;
       }

       getValue(arr, size, index+1, target);
}

int main() {
    int arr[] = {10,20,30,40,50};
    int size = 5;
    int index = 0;
    int target = 50;
   cout <<  getValue(arr, size, index, target) << endl;

    return 0;
}

// 3rd question!.. odd number in an array!..

#include <iostream>
using namespace std;

void  printOddNumbers(int arr[], int size, int index){
    
    if(index>= size){
          return;
    }

    if(arr[index] % 2 != 0){
          // odd number hai bhai wo usko stroe kar lo kahi p ya print kar do okkh!..
          cout << arr[index] << " "; 
    }

    printOddNumbers(arr, size, index+1);
}

int main (){
   int arr[] = {10,20,30,40,50,60};
   int size = 6;
   int index = 0;

   // print all odd number's!..

   printOddNumbers(arr, size, index);

    return 0;
}

// similary even number wala bhi ata hai ek okkh!..

#include <iostream>
using namespace std;

void  printEvenNumbers(int arr[], int size, int index){
    
    if(index>= size){
          return;
    }

    if(arr[index] % 2 == 0){
          // odd number hai bhai wo usko stroe kar lo kahi p ya print kar do okkh!..
          cout << arr[index] << " "; 
    }

    printEvenNumbers(arr, size, index+1);
}

int main (){
   int arr[] = {10,20,30,40,50,60};
   int size = 6;
   int index = 0;

   // print all odd number's!..

   printEvenNumbers(arr, size, index);

    return 0;
}

//  Maximum value in an array!..

#include <iostream>
using namespace std;

void getMaxValue(int arr[], int size, int maxi, int index){
      if(size >= index){
          return;
      }

      // ek case mera baki recursion will handle okkh!..
      int value = arr[index];
      maxi = max(value, maxi);

      getMaxValue(arr, size, maxi, index+1);

      cout << maxi << " ";
}

int main(){
    int arr[] = {10, 20, 30, 40,50};
    int size = 5;
    int index = 0;
    int maxi = INT_MIN;

    getMaxValue(arr, index, size, maxi);
    return 0;
}

// similarly miniimum wala bhi hoga aise hi kuch okkh!..

#include <iostream>
using namespace std;

void  getMinValue(int arr[], int size, int mini, int index){
      if(size >= index){
          return;
      }

      // ek case mera baki recursion will handle okkh!..
      int value = arr[index];
      mini = min(value, mini);

      getMinValue(arr, size, mini, index+1);

      cout << mini << " ";
}

int main(){
    int arr[] = {10, 20, 30, 40,50};
    int size = 5;
    int index = 0;
    int mini = INT_MAX;

    getMinValue(arr, index, size, mini);
    return 0;
}

// print all digit wala tha ek like ki mai isme!..
// sare digitt priint karta hu okkh!..

