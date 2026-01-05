// iterator ayega okkh!..

#include <iostream>
#include <vector>
using namespace std;

int main() {
     
    vector<int> arr;

    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);
    arr.push_back(40);
    arr.push_back(50);
     
    // vector mai hamm push_back and pop_back ata hai okkh! push and pop nahi ata okkh!..

    // vector<int> :: iterator it = arr.begin();

    // while(it != arr.end()){
    //       cout << *it << " ";
    //       it++; 
    // }

    vector<int> :: iterator it;

    for(it = arr.begin(); it != arr.end(); it++){
           cout << *it << " ";
    }
     

    return 0;
}