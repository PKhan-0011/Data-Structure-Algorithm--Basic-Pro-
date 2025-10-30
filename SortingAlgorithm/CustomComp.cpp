// #include <iostream>
// #include <algorithm>
// #include <vector>
// using namespace std;

// void print(vector<int> &a){
//     int size = a.size();
//     for(int i = 0; i<size; i++){
//         cout << a[i] << " ";
//     }
// }

// // comp jo hoga wo actually boolean return karega okkh!..;

// bool myComp(int &c, int &d){
//     //return c < d; // ye increaseing order m ho jayega sort 
//     // in case mughe decreasing order m chiaye to 
//   //  return c > d; // for decreasing order;
// }

// int main(){
//    vector<int> a = {100,99,88,77,66,55};
//     sort(a.begin(), a.end(), myComp);
//      print(a);
//    return 0;
// }


// #include <iostream>
// #include <algorithm>
// #include <vector>
// using namespace std;

// void printVector(vector<vector<int>> &v){
//     for(int i = 0; i < v.size(); i++){
//         vector<int> &temp = v[i];
//         int a = temp[0];
//         int b = temp[1];
//         cout << a << " " << b << endl;
//     }
// }

// bool myCompFirstIndex(vector<int> &a, vector<int> &b){
//       return a[1] < b[1];
// }


// int main(){
//    vector<vector<int>> v; // [[10, 20], [30, 40], [50,60]] aisa array banega bcz ye vector aisa hi hai okkh!..;
//     int n;
//    cout << "Enter the value of n\n";
//    cin >> n;

//    for(int i = 0; i< n; i++){
//       int a, b;
//       cout << "Enter the value of a and b" << " ";
//       cin >> a >> b;
//        vector<int> temp;
//        temp.push_back(a);
//        temp.push_back(b);
//        v.push_back(temp);
//    }

//    cout << "Sara data before sorting" << endl;
//    printVector(v);

//    cout << "Sara data after sorting in Increasing or dec order" << endl;
//    sort(v.begin(), v.end(), myCompFirstIndex);
//    printVector(v);

//     return 0;
// }

// ek aur bar dekh le sahi s custom comprator like isme hota ye hai ki hamm isme 
// appne according chize set kar sakte hai jaise increaseing and dec sabhi chize okkh

// example in 2d arrays [[0, 19], [0, 20], [1,15], [1, 30]];

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void printV(vector<vector<int>> &v){
    for(int i=0; i< v.size(); i++){
        vector<int> &Temp = v[i];
         int a = Temp[0];
         int b = Temp[1];

         cout << a << " " << b << endl;
    }
}

bool myComp(vector<int> &a, vector<int> &b){
    //return a[0] > b[0]; // ye desc order hai 
    return a[1] < b[1]; // ye inc ordre hai;
}

int main(){
     vector<vector<int>> v;
     int n;
     cout << "Enter the value of n";
     cin >> n;

     for(int i = 0; i< n; i++){
        int a, b;
         vector<int> temp;
         cout << "Enter the value of a and b" << endl;
         cin >> a >> b;
        temp.push_back(a);
        temp.push_back(b);
        v.push_back(temp);
     }
     
     // abb ham samjh le bahar khade hai ek array k okkh;
     cout << "before sorting data's" << endl;
     printV(v);

     cout << "After sorting data's" << endl;
     sort(v.begin(), v.end(), myComp);
     printV(v);

    return 0;
}