// #include <iostream>
// #include <algorithm>
// #include <vector>
// using namespace std;

// void print(vector<int> &v){
//     int n = v.size();
//     for(int i =0; i<= n-1; i++){
//         cout << v[i] << " ";
//     }
// }

// void selectionSort(vector<int> &v){
//     int n = v.size();
//     for(int i = 0; i<= n-1; i++){
//         int minIndex = i;
//         for(int j = i+1; j<n; j++){
//             if(v[j] < v[minIndex]){
//                 minIndex = j;
//             }
//         }
//         swap(v[i], v[minIndex]);
//     }
// }

// int main(){
//     vector<int> v = {44, 33, 55, 22, 11};
//      selectionSort(v);
//      print(v);

//      return 0;
// }


#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void print(vector<int> &v){
    int n = v.size();
    for(int i = 0; i<= n-1; i++){
        cout << v[i] << " ";
    }
}

void selectionSort(vector<int>&v){
    int n = v.size();
    for(int i = 0; i<= n-1; i++){
        int minIndex = i;
        for(int j = i+1; j<n; j++){
             if(v[j] < v[minIndex]){
                minIndex = j;
             }            
        }
          swap(v[i], v[minIndex]); // yha pe mai v[i] isliye leta hu bcz hame sabse pehle first Element s hi swap karna hota hai.. thats why!!..
    }
}

int main(){
    vector<int> v = {88, 78, 68, 90, 10};
    selectionSort(v);
    print(v);
    return 0;
}


// selection sort m generally hota ye hia ki hame yha p sabse pehle 
// first element ko dekhna hota hai and compare karna hota hai sabse pure arrays s 
// uske badd fir hame kisi bhi jagah store karna hota hai then vcalue nikal lo ho jayega;
// simlar as bubble sort but halka sa differ hai isme bhi okkh!..;
