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
    char ch[100] = "Parvej";
    char *cptr = ch;

    cout << cptr << endl;
    cout << "ch "<< ch << endl;
    cout << "&ch "<< &ch << endl;
    cout << "ch[0] " << ch[0] << endl;
    cout << "&cptr " << &cptr << endl;
    cout << "*cptr " << *cptr << endl;
    cout << "*(cptr + 3)" << *(cptr + 3) << endl;
    
    cout << "cptr " << cptr << endl;
    cout << cptr + 3 << endl;

    return 0;
}

