// first question #include<iostream>
#include <iostream>
using namespace std;

int main(){
    int n, sum = 0;
    cin >> n;
    int input[n]; // ye array hai ek tarike ka 
    for(int i=0;i<n;i++){
        cin >> input[i];
    }
     for(int i=0; i<n; i++){
         sum = sum + input[i];
     }
    cout << sum << endl;
    return 0;
}

// above wale m kuch chize thi error like sum hamne nah diya tha okkh!.. like sum intailize hi nahi kiya tha 
// input bhi galt le rahe the input[n] le rahe the hamm instead of i okkh!..

// 2nd question...

bool linearSearch(int arr[], int n ,int val){
    for(int i=0;i<n;i++){
        if(arr[i]==val){
            return true;
        }
    }
    return false;
}

// void tha yha p uski jagah bool ya fir integer lenge okkh!..