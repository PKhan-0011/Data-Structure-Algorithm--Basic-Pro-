#include <iostream>
using namespace std;

// int main() {
//     int arr[] = {10,20,30,40,50};
//     int size = 5;

//     cout << sizeof(arr) << endl; // Yha p pointer ki tarah arr behave karta hai first wale ka addrress hi store hoga yha p!..

//     return 0;
// } 

// Heap memeory wali bat chit yha p!..

int main() {
    int a = 5;

    cout << a << endl;

    int *p = new int;
    *p = 5;

    cout << *p << " ";

    delete p; // deallocate -> delete hoga isse okkh!..

    return 0;
}