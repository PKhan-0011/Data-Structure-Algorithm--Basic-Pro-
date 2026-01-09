// search in nearly sorted array!, search in rotatted array,,

// int arr[] = {10, 3, 40, 20, 50, 70} key = 40; 
// output = 2;

// #include <iostream>
// using namespace std;

// int getTarget(int arr[], int target, int n){
//     int s = 0;
//     int e = n-1;

//     while(s <= e){
//           int mid = s + (e-s)/2;

//           if(arr[mid] == target){
//               return mid;
//           }
//           else if (arr[mid + 1] == target){
//               return mid + 1;
//           }
//           else if (arr[mid - 1] == target){
//              return mid -1;
//           }

//           if(target > arr[mid]){
//               s = mid + 1;
//           }
//           else {
//              e = mid -1;
//           }
//     }
//     return -1;
// }

// int main() {
    
//     int arr[] = {10,3,40,20,50,70,80};
//     int n = 7;
//     int target = 80;

//     int ans = getTarget(arr, target, n);

//     cout << ans << " ";
//     return 0;
// }


// 2nd question!.. find Odd occurence! of an given array!..
// sare elemnets even number m exist karte hai 1 ko chor k okkh!..
// and one split mai 2 s zda nahi ayeneg okkh!>.
// pairs mai sare aate hai!..
// find element that occur odd times.

// ye O(n) mai ho sakta hai okkh.. by xor,
// ye O(n) mai also ho sakta hai.. by map..
// but hame O(logn) mai find out karna hai isko ye dhyan rakhna hai okkh!..

#include <iostream>
#include <unordered_map>
using namespace std;

int getOddOccurence(int arr[], int size){

       unordered_map<int, int> map;

    //   for(int i = 0; i<size; i++){
    //        ans = ans^arr[i];
    //   }
    //   return ans;
    
    // frequency count chaiyye mughe isme okkh!..

    for(int i = 0; i<size; i++){
          map[arr[i]]++;
    }

    // yha s sabhii ka iterarter nikal lunga okkjh!..

    unordered_map<int, int> :: iterator it = map.begin();

    while(it != map.end()){
          cout << it->first << it->second << " ";
           
          cout << endl;

          if(it->second % 2 != 0){
              return it->first;
          }
          it ++; 
    }
}

int main(){  
    int arr[] = {1,1,2,2,3,3,4,5,5,3,3, 4, 4};
    int size = 13;
     
    int ans = getOddOccurence(arr, size);

    cout << ans << " ";

    return 0;
}
