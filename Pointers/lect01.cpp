#include <iostream>
using namespace std;

// int main() {
     
//     // int a = 5;
//     // int b = a;
//     // int* c = &a; // ye pointer ho gya hai ab ye address store karega okh!..
//     //  cout <<  sizeof(c) << " ";
//     // cout << a << " ";
//     // cout << &a << " "; // ye wala hame address dega ye dhyan rakhio okkh!..
      
//     // bad Practise!..
//     // int a;
//     //  int * ptr;
//     //  cout << * ptr << " "; 
//     // return 0;
// }

// 2nd question of Pointers char wala!..

#include <iostream>
using namespace std;

int main() {
    // char ch[100] = "Parvej";
    // char *cptr = ch;

    // cout << cptr << endl;
    // cout << "ch "<< ch << endl;
    // cout << "&ch "<< &ch << endl;
    // cout << "ch[0] " << ch[0] << endl;
    // cout << "&cptr " << &cptr << endl;
    // cout << "*cptr " << *cptr << endl;
    // cout << "*(cptr + 3)" << *(cptr + 3) << endl;
    
    // cout << "cptr " << cptr << endl;
    // cout << cptr + 3 << endl;

    // char ch[] = "a";
    // char *cptr = ch;

    // cout << "ch " << cptr << endl;

    char ch[] = "raceCar";
    char *cptr = &ch[0];
    
     cout << "ch " << ch << endl;
     cout << "&ch " << &ch << endl;
     cout << "*(ch + 3) " << *(ch + 3) << endl;

     cout << cptr << endl;
     cout << "*cptr " << *cptr << endl;

     cout << "*(cptr + 2) " << *(cptr + 2)  << endl;

     cout << "cptr + 2 " << cptr + 2 << endl;

     cout << "cptr + 4 " << cptr + 4 << endl; 

    return 0;
}

