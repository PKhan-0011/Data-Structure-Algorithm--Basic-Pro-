// In Conatiner 6 chize ati hai 
// Vector, List, queue, stack, set and map,

// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     // craeteing a vector here!..
//     vector<int> ans(5,10);
//     // intailizing a vector size!..
//     // vector<int> ans(5); // 5 size ka array ban gya hai ye okkh!..
    
//     // vector<int> ans(5, 0); // 5 size kaarray value uske andar 0 hai 5chi jagah okkh!.. [0,0,0,0,0]; 
     
//    cout <<  *ans.begin() << endl;
//    cout << *ans.end() << endl; // iska address aa rha hai valuee nahi aa rhi hai okh!..

//    // * laagne s aage value pprint hogi us array kii okkh!..


//     return 0;
// }

// vector mai like agar koi value excess karni padegi to mai * uske aage lga k kar lunga okkh!..
// for an example ans.begin() isse address ayega us point ka but value chaiye to mai *ans.begin() kar dunga usse array ki value aa jayegi okh!.

#include <iostream>
using namespace std;
#include <vector>

int main () {
     
    vector<int> marks;

    // abb agar mughe marks wale data mai kcuh bhi push karna hoga to mai push_back s kar dunag okkh!..

    marks.push_back(10);
    marks.push_back(20);
    marks.push_back(30);
     
    // ek isme hi v.begin() ata hai wo first wale k liye hota hai first elemnt k liye okkh!!.
    // lats wala agar mugeh chaiye v.end() kar dunga okkh mai!.

    vector<int>::iterator it = marks.begin();

     while(it != marks.end()){
         cout << *it << " ";
         it++;
     }

    return 0;
}