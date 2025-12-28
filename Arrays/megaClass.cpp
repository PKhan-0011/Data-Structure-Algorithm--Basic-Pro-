// yha p like na single number wala logic karte hai okkh!..
// kuch extra logic except xor!..

// #include <iostream>
// #include <algorithm>
// using namespace std;

// int getNumber(int arr[], int size){
//       // agar vector hoga to sort() mughe aise karna padega liek sort(arr.begin(), arr.end());
       
//       int ans02 = -1;

//      sort(arr, arr + size);   // o(nlogn);
//       // sort hamm ye normal array ko aise karte hai okkh!..
       
//       for(int i = 0; i<size; i++){
//           cout << arr[i] << " ";
//       }

//       for(int i = 0; i<size; i++){

//           if(i+1 < size && arr[i] == arr[i+1]){
//               i += 1;
//           }
//           else{
//             ans02 = arr[i];
//           }
//       }
//       return ans02;
// }

// int main () {
//     int arr[] = {1,2,3,3,2,1,4};
//     int size = 7;
     
//     int ans = getNumber(arr, size);
      
//     cout << ans << endl; 

//     return 0;
// }


// hashMap s bhi ho jayega okkh!.. iskii t.c O(n) and s.c O(n);

// hashMap s simple yahi hota hai like ki isme hamm pehle frequency count karenge okkh!..
// uske baad usi p loop lga k check karnge ki ye kitni bar exist karta hai okkh!.. 

#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;

int getUniqueNumber(int arr[], int size){
      // yha p mughe unordered map lagana padega okkh!..
     unordered_map<int, int> mp;
     // yha p chize key and value pair m store karte hai..
      
     for(int i = 0; i<size; i++){
          mp[arr[i]]++;
     }
     
     // yha number aaa jayega like uski frequency okkh!.. uske baad usme loop lga 
     // and find karle kitne numbers hai uske agar 1 hai to wahi wala number return karde okkh!..

     for(int i = 0; i<size; i++){
       if( mp[arr[i]]++ == 1 ){
           return arr[i];
       }
     }
    return -1;
}

int main() {
   int arr[] = {1,2,3,3,2,1,4};
   int size = 7;
   
   int ans = getUniqueNumber(arr, size);

   cout << ans << " ";

   return 0;

}