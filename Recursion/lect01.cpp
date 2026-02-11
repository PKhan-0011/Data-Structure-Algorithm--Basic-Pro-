// Factorila of 5!..

// #include <iostream>
// using namespace std;

// int getFactorial(int n){
//     // base case ata hai yha p ek to sabse pehle okkh!..
//     if(n == 0 || n == 1){
//           return 1;
//     } 
//     int finalAns = n*getFactorial(n-1);
//     return finalAns;
// }

// int main(){
//     int n = 5;
    
//     int finalAns = getFactorial(n);

//     cout << finalAns;

//     return 0;
// }

// Print counting by a recusrion method!..


// #include <iostream>
// using namespace std;

// void getNumber(int n){
//     // base case ho gya hai na tera !..

//     if(n == 0){
//           return;
//     }
    
//    // cout << n << " ";

//     getNumber(n-1);

//     cout << n << " ";

// }

// int main(){
//     int n = 5;
//     getNumber(n);
//     return 0;
// }

// power of 2!.. ki bat chit okkh!..

// #include <iostream>
// using namespace std;

// int getPower(int n){
//       if(n == 1){
//         return 2;
//       }

//       int finalAnswer = 2*getPower(n-1);

//       return finalAnswer;
// }


// int main() {

//     int n = 5;

//     int answer = getPower(n);
    
//     cout << answer << " ";

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int fib(int n){
//       if(n == 1 || n == 0){
//         return n;
//       }

//       int finalAnswer = fib(n-1) + fib(n-2);

//       return finalAnswer;
// }


// int main() {

//     int n = 8;

//     int answer = fib(n);
    
//     cout << answer << " ";

//     return 0;
// }


#include <iostream>
using namespace std;

int getSum(int n){
      if(n == 1){
        return 1;
      }

      int finalAnswer = n  + getSum(n-1);

      return finalAnswer;
}


int main() {

    int n = 5;

    int answer = getSum(n);
    
    cout << answer << " ";

    return 0;
}