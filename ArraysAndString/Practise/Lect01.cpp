// length of an char array!..

// #include <iostream>
// using namespace std;

// int getLength(char arr[], int size){
//      int length = 0;
//      for(int i = 0 ; i<size; i++){
//           if(arr[i] == '\0'){
//                return length;
//           }
//           else {
//               length++;
//           }
//      }
//      return length;
// }

// int main() {
    
//     char arr[1000] = {};
//     int size = 1000;

//     int value = getLength(arr, size);

//     cout << value << " ";

//     return 0;
// }

#include <iostream>
using namespace std;


void getNewArray(char arr[]){
     int index = 0;
     while(index != '\0'){
         // agarr index empty wale k ppass chla gya hai to length nahi niklega okkh!..
         if(arr[index] == '@'){
             arr[index] = ' ';
             index ++;
         }
         index++;
     }
}

int main() {
   char arr[1000];

   getNewArray(arr);

   for(int i = 0; i<'\0'; i++){
        cout << arr[i];
   };

   return 0;
}