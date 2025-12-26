// yha pe 1st question ayega jaise length of name etc..

// #include <iostream>
// using namespace std;

// int getLength(char arr[], int size ){
//      int index = 0;
//      int count = 0;

//      while(arr[index] != '\0'){
//         // iska matlb ye hai ki jab tak null nahi ho jata arr[index] tab tak aage 
//         // badh0
//         index++;
//         count++;
//      }
//      return count;
// }

// int main(){
//     char arr[1000];

//     cin >> arr;
//     cout << getLength(arr, size) << "ye hai tera length" << endl;
   
//     return 0;
// }

// replace @ to ' ' ek arrays hai like arr[] = "My@Name@is@Parvej@Khan";

// #include <iostream>
// using namespace std;

// void replaceCharacter(char originalCharcter, char newChar, int size, char arr[]){
//     for(int i = 0; i<= size; i++){
//         if(arr[i] = '@'  ){
//             arr[i] = ' ';
//         }
//     }
// }

// void converttoUpperCase(char arr[], int size){
//      for(int i = 0; i< size; i++){
//         char ch = arr[i];
//          arr[i] = ch - 'a' + 'A';
//      }
// }

// int getLength(char arr[], int n){
//      int count = 0;
//       int i = 0;
//      while(i != '\0'){
//         i++;
//         count++;
//      }
//      return count;
// }

// void getReverse(char arr[], int n){
//     int len = getLength(arr, n);

    // yha p length ki actaully need isliye padti hai bcz yha p hame;
    // n ki size 1000 hai but hame actually length chaiye jo arrays ka hai okkh!..;

     
      
//     int i= 0;
//     int j = len-1;

//     while(i <= j){
//         swap(arr[i], arr[j]);
//         i++;
//         j--;
//     }
    
// }

// int main(){
//     char arr[100];
//     cin >> arr;

// //    replaceCharacter('@', ' ', 100, arr);
//    getReverse(arr, 100);
//    converttoUpperCase(arr, 100);
//    cout << arr << endl;
//     return 0;
// }


// yha pe ayega tera plaindrome wala queation;

// #include <iostream>
// using namespace std;

// int getLength(char arr[], int size){
//      int i = 0;
//      int count = 0;

//      while(i != '\0'){
//         i++;
//         count++;
//      }

//      return count;
// }

// bool checkPalindrome(char arr[], int size){
//      // length to mughe yha p actaully nikalni hi padegi bcz yha p mughe actually length nahi 
//      // pta iska n = 1000 not length;

//      int len = getLength(arr, size);

//      int i = 0;
//      int j = len - 1;

//      while(i <= j){
//          if(arr[i] == arr[j]){
//              i++;
//              j--;
//          }
//          else{
//             return false;
//          }
//      }
//      return true;
// }

// int main(){
//   char arr[1000];
  
//   cin >> arr;

//   bool ans = checkPalindrome(arr, 1000);

//   if(ans){
//     cout  << " ans true aya hai yha pe!" << endl;
//   }
//   else{
//     cout << "ans false hai !" << endl;
//   }

//     return 0;
// }


//         STRING'S


// PUSH_BACK AND POP_BACK, Getline(cin, sentense, '\n'); etc..

// #include <iostream>
// using namespace std;

// int main(){
//     string name = "Maharana Pratap!";
//     // cout << name[0] << endl;
//     // cout << name.at(0) << endl;

//     // cout << name.front(); // isse first wala ayega first alpha bet 
//     // cout << name.back(); // isse last wala alphabet ayega!..;

//     auto it = name.begin(); // yha pe jab maine int diya to they show me error but in case of it yha pe std::string::iterator::;

//     while(it != name.end()){
//         cout << *it << " ";
//          it++;
//     }


// }

// #include <iostream>
// using namespace std;

// int main (){
//     char arr[100]; // isse 100 size ka character ban jayega okkh!..

//     //Outpit:- Enter Your Name..
//     cout << "Enter Your name here!.";

//     cin.getline(arr, 100, '/t'); // Yha p spaca ka delimeter lga hua hai okkkh!..

//     cout << "Your name is: " <<  arr << endl;
     
//     // abb mai ye chahta hu ki ek ek karke print ho sabb to kaise karenge okkh!..
//      cout << arr[0]  << (int)arr[0] << endl;     
//      cout << arr[1]  << (int)arr[1] << endl;     
//      cout << arr[2]  << (int)arr[2] << endl;     
//      cout << arr[3]  << (int)arr[3] << endl;     
//      cout << arr[4]  << (int)arr[4] << endl;     
//      cout << arr[5]  << (int)arr[5] << endl;     
//      cout << arr[6]  << (int)arr[6] << endl;     
     
//      // Yha p ek typeCaseting ka rule bhi ayega like iska matlb ye hota hai jisme hamm actaulyy
//      // uska type change karte hai okkh!.. jaise char hai to int etc, etc okkh!.. uske baad uski asci value nikl sakte hai usse hi typeCase kahte hia...

//       return 0;
// }

// Delimeter wala concept bhai like isme hota ye hai li space ya to enter ya to tab hot karne p line change ho jati hai jisse char 
// aage ka data nahi le pata. jais Parvej Khan pe sirf Parvej print karega. Agr mughe Pura Name pPrint karna hai to mai getline ka use karunag !..



// #include <iostream>
// using namespace std;


// int getLength(char arr[], int size){
//      int count = 0;
//      int index = 0;

//      while(arr[index] != '\0'){
//          count++;
//          index++;
//      }

//      return count;
// }


// int main() {
    
//     char arr[1000];
//     cin >> arr;

//    cout << getLength(arr, 1000) << "get Length";
// }

// 2nd question Replace Character... "My@Name@is@Love@Babbar";

// #include <iostream>
// using namespace std;


// void replaceCharacter(char originalCharacter, char spaceCharacter, char arr[], int size){
//      for(int i = 0; i<size; i++){
//           if(arr[i] == originalCharacter){
//               arr[i] = spaceCharacter;
//           }
//      }
// }


// int main(){

//     char arr[1000];
//     cin >> arr;

//     replaceCharacter('@', ' ', arr, 1000);

//     cout << arr << endl;

//     return 0;
// }'

// #include <iostream>
// using namespace std;


//  void UpperCaseToLowerCase(char arr[], int size){
//       for(int i = 0; i<size; i++){
//           char ch = arr[i];
//           ch = ch - 'A' + 'a';
//           arr[i] = ch;
//       }
//  }

// int main(){
    
//     char arr[1000];

//     cin >> arr;

//     UpperCaseToLowerCase(arr, 1000);

//     cout << arr << endl;

//     return 0;
// }

// find target in a array like linear search wala okkh!..

// #include <iostream>
// using namespace std;


// bool getTarget(int arr[], int size, int target) {
//      for(int i = 0; i<=size; i++){
//          if(arr[i] == target){
//               return true;
//          }
//      }
//      return false;
// }

// int main() {
    
//     int arr[5] = {10, 20, 30, 40, 50};

//     int size = 5;

//     int target = 50;

//     bool ans = getTarget(arr, size, target);

//     cout << ans << endl;
    
//     if(ans == 1){
//          cout << "Target found!..";
//     }
//     else{
//         cout << "Target not found!..";
//     }
//     return 0;
// }


// Find minimum and maximum number in an array!..

// #include <iostream>
// #include <algorithm>
// #include <limits.h>
// using namespace std;


// int getMaximumAns(int arr[5], int size){
//      int minimumNumber = INT_MAX; // isme ans jo hai wo -2^31
     
//      for(int i = 0; i< size; i++){
//          if(arr[i] < minimumNumber){
//                minimumNumber = arr[i];
//          }
//      }
//       cout << minimumNumber << endl; 
//      return minimumNumber;
// };


// int main () {
//      int arr[5] = {10, 20, 30, 40, 50};
//      int size = 5;
     
//      int ans = getMaximumAns(arr, size);

//      cout << ans << " maximum number of this array.." << endl;

//      return 0;
// }

// #include <iostream>
// using namespace std;

// void  getCount(int arr[], int size) {
//      int zeroCount = 0;
//      int oneCount = 0;

//      for(int i = 0; i<size; i++){
//          if(arr[i] == 0){
//              zeroCount++;
//          }
//          else if (arr[i] == 1){
//               oneCount++;
//          }
//      }
//      cout << zeroCount << " Number of ZeroCount" << endl;
//      cout << oneCount << " Number of OneCount" << endl;
// };

// int main () {
//     int arr[] = {0,1,1,1,0,0,1};
//     int size = 7;

//     getCount(arr, size);
//     return 0;
// }

// Two pointer technique extreme printing okkh!..

#include <iostream>
using namespace std;

void printArray(int arr[], int size){
     for(int i = 0; i<= size; i++){
         cout << arr[i] << " ";
     }
}

void getExtremePrinting(int arr[], int size) {
     int i = 0;
     int j = size-1;

     while(i <= j){

        if(arr[i] == arr[j]){
              cout << arr[i];
              i++;
              j--;
         }

        else{
              cout << arr[i] << " ";
               i++;
             cout << arr[j] << " ";
               j--;
        }

     }
}

int main () {
    int arr[5] = {10, 20, 30, 40, 50, };
    int size = 5;

    getExtremePrinting(arr, size);

    return 0;
}

