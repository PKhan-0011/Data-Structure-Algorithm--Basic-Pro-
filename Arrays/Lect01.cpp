// // first question linear search..;

#include <iostream>
using namespace std;

bool getTarget(int arr[], int target, int n){
       for(int i= 0; i<6; i++){
        if(arr[i] == target){
            return true;
        }
    }
    return false;
}

int main(){
   int arr[6] = {10,20,30,40,50,60};
   int target = 50;
   int n = 6;

   bool ans = getTarget(arr, target, n);

   if(ans){
    cout << "Yes found!" << endl;;
   }
   else{
     cout << "Not found!" << endl;
   }

   return 0;
}



// 2nd question maximum nikal k do mughe given arrays s!..;
// arr[] = {13, 21, 14, 17};

#include <iostream>
using namespace std;
#include <climits>

int getMax(int arr[], int maxAns, int size){
     for(int i = 0; i<size; i++){
         maxAns = max(maxAns, arr[i]);
     }
     return maxAns;
    }


int main(){
    int arr[] = {13, 21, 14, 17};
    int maxAns = INT_MIN;
    int size = 4;

    int ans = getMax(arr, maxAns, size);

    cout << ans << " ";

    return 0;
}

// similary ek min wala bhi ayega;

#include <iostream>
using namespace std;
#include <climits>

int getMin(int arr[], int minAns, int size){
     for(int i = 0; i<size; i++){
         minAns = min(minAns, arr[i]);
     }
     return minAns;
    } 


int main(){
    int arr[] = {13, 21, 14, 17};
    int minAns = INT_MAX;
    int size = 4;

    int ans = getMin(arr, minAns, size);

    cout << ans << " ";

    return 0;
}

// zero count and oneCount wale question;

#include <iostream>
using namespace std;

void getZeroCountAndOneCount(int arr[], int size){
    int zero = 0;
    int one = 0;

    for(int i = 0; i<size; i++){
        if(arr[i] == 0){
            zero++;
        }
        else if(arr[i] == 1){
            one++;
        }
    }
    cout << "Number of zero Count" << zero << endl;
    cout << "Number of one Count" << one << endl;

}

int main(){
    int arr[] = {0,0,1,1,1,0,0,1};
    int size = 8;

    getZeroCountAndOneCount(arr, size);

    return 0;
}


// Two pointer wala todha accha question like pehle print karao then aage leke jao and piche to!;'
// int arr = {10,20,30,40,50,60};
// // output = {10,60,20,50,30,40};

#include <iostream>
using namespace std;

void getTodhaUltaPulta(int arr[], int size){
     int i = 0;
     int j = size-1;

     while(i <= j){
        // ek condition lag sakti yha pe like todhi si optomization type;
        if(i == j){
           cout <<   arr[i] << " ";
           i++;
        }

        cout << arr[i] << " "; 
        i++;
        cout << arr[j] << " ";
        j--;
     }
}

int main(){
    int arr[] = {10,20,30,40,50,60};
    int size  = 6;
    getTodhaUltaPulta(arr, size);

    return 0;
}


// pura revise ek bar then.. uske baad ege k lectire okkh!..


