// check Sorted or not by recursion!..

// #include <iostream>
// using namespace std;

// bool CheckSorted(int arr[], int size, int index){
//      // base case ayega okkh!..
//      if(index == size){
//           // iska matlb ye hai ki mai last tak aa gya hu aur iska matlb ye hai ki sabb sorted chl rha hai okkh!..
//           return true;
//      }

//      // ek aur case ayega yha p like jo check karega ki ye condition true hogi ya nhai okkh!..
//      if(arr[index] > arr[index + 1]){
//         return false;
//      }
     
//     bool ans = CheckSorted(arr, index+1, size);
//     if(ans){
//         return true;
//     }
//     else{
//         return false;
//     }
// }

// int main() {
//     int arr[] = {10,20,30,40,50};
//     int size = 5; 
//      int index = 0;
//      bool ans1 = CheckSorted(arr, size, index);
     
//      if(ans1){
//         cout << "True answer hai brouh!" << " ";
//      }else{
//         cout << "False answer hai yha p okkh!.." << " ";
//      }
     
//     return 0;
// }

// include and exclude pattern ata hai ek okkh!..

#include <iostream>
#include <vector>
using namespace std;

void PrintSubSequence(string ans, int size, int index, vector<string> &vectorAns, string output){
   // base case ata hia ek agar string k bhar chla gya to smjh l yahi base case h okkh!..
   if(index == size){
      vectorAns.push_back(output);
      return;
   } 

   /// ek ayega include and ek ayega excluude wala okh!..
   char ch = ans[index];
   // include 
   PrintSubSequence(ans, size, index+1, vectorAns, output+ch);
   // exlclude!..
   PrintSubSequence(ans, size, index+1, vectorAns, output);
}

int main(){
    
  string ans = "abc";
  string output = "";
   int size = 3;
   int index = 0;
    vector<string> vectorAns;
   PrintSubSequence(ans, size, index, vectorAns, output);
   int count = vectorAns.size();
   
   cout << count << " ";

   for(auto i : vectorAns){
       cout << i << endl;
   }

    return 0;
}

