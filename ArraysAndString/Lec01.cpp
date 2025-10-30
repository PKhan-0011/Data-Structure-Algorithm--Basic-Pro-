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

#include <iostream>
using namespace std;

int main(){
    string name = "Maharana Pratap!";
    // cout << name[0] << endl;
    // cout << name.at(0) << endl;

    // cout << name.front(); // isse first wala ayega first alpha bet 
    // cout << name.back(); // isse last wala alphabet ayega!..;

    auto it = name.begin(); // yha pe jab maine int diya to they show me error but in case of it yha pe std::string::iterator::;

    while(it != name.end()){
        cout << *it << " ";
         it++;
    }


}