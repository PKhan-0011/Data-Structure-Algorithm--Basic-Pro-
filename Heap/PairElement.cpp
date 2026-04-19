
// pair wala chiaye isme!..

#include <iostream>
using namespace std;


struct cmp
{
    bool operator()(vector<pair<int, string>> &a, vector<pair<int, string>> &b){
       if(a.first != b.first){
            return a.first > b.first; // min heap ban rhi hai isse!.. jo chota hoga wo upar ayega!.
       }
       return a.second > b.second;
} 
};
