
// pair wala chiaye isme!..

#include <iostream>
#include <vector>
using namespace std;

struct cmp
{
    bool operator()(pair<int, string> &a, pair<int, string> &b){
       if(a.first != b.first){
            return a.first > b.first; // min heap ban rhi hai isse!.. jo chota hoga wo upar ayega!.
       }
       return a.second > b.second;
} 
};


vector<int> getPriorityValue(vector<int> arr){
       // yha p priority_queue banega okkh!..
}

