// #include <iostream>
// using namespace std;

// int getValue(int divident, int divisor){
//     int s = -divident;
//     int e = divident;
//     int mid = s + ((e-s)>>1); // ye right shift hai isse hamm 2 se divide kar dete hai;
//     int storeValue = -1;

//     while(s <= e){
//         if(divisor*mid == divident){
//             return mid;
//         }
//         else if (divisor*mid < divident){
//             // target door hai 
//             storeValue = mid;
//             s = mid + 1;
//         }
//         else {
//             s = mid + 1;
//         }
//         mid = s + ((e-s)>>1);
//     }
//     return storeValue;
// }


// int main(){
//     int divident = 10;
//     int divisor = -2;
    
//     int ans = getValue(divident, divisor);

//     cout << ans << " ";

//     return 0;
// }

// 2nd question ayega yha s abb!...;

// search in a nearly sorted array..;

// #include <iostream>
// using namespace std;

// int getValue(int arr[], int size, int target){
//       int s = 0;
//       int e = size-1;
//       int mid = s + (e-s)/2;

//       while(s<=e){
//           if(arr[mid] == target){
//             return mid;
//           }
//           else if(arr[mid-1] == target ){
//             return mid-1;
//           }
//           else if (arr[mid + 1] == target){
//             return mid + 1;
//           }
//           else if (arr[mid] > target){
//              e = mid-2;
//           }
//           else{
//             s = mid + 2;
//           }
//           mid = s + (e-s)/2;
//       }
//       return -1;
// }

// int main(){
//     int arr[] = {10,3,40,20,50,80,70};
//     int size = 7;
//     int target = 100;

//     int ans = getValue(arr, size, target);
//     cout << "Index is " << ans << endl;

//     return 0;
// }

// single element in sorted array 540 leetcode questiion,,;
// ye todha sa dekh liyo ek bar okkh!..;

#include <iostream>;
using namespace std;

int getAns(int arr[], int size){
    int s = 0;
    int e = size-1;

    int mid = s + (e-s)/2;

    while(s <= e){
        if(s == e){
            return s;
            // single elemnet wala case;
        }

        int currElement = arr[mid];
        int firstElement = -1;
        if(mid-1 >= 0){
            firstElement = arr[mid-1];
        } 

        int LastElement = -1;
        if(mid + 1 < size){
            LastElement = arr[mid+1];
        }

        // abb yha s actually condtion start hongi like 
        // first case single elment hua to;

        if(currElement != LastElement && currElement != firstElement){
             return currElement;
        }
         // abb yha s 2nd condion ayegi jaise man lo dubliicate present hai but left me hai;
        else if(currElement == LastElement){
            int Value = currElement;
            if(Value & 1){
                // iska matlb ye hai jaise ki ye odd wali bat chit hai 
                // matlb firstElement = odd  to ye right m hai isko left m le jao 
                e = mid - 1;
            }
            else{
                 s = mid + 1;
            }
        }
        else if(currElement == firstElement){
             int Value2 = currElement;
             if(Value2 & 1){
                // iska matlb abhi bhi hamm right m hi hai picche jana hai 
                e = mid - 1;
             }
             else{
                s = mid + 1;
             }
        }
        mid = s + (e-s)/2;
    }
    return -1; // agar kuch bhi nahi aya to ye okkh!..,
}

int main(){
    int arr[] = {1,2,2,3,3};
    int size = 5;

    int ans = getAns(arr, size);

    cout << ans << "answer yhi ayega tera like ans jo mentioned hai!" << endl;

    return 0;
}

// iska logic generally yahi hai ki pehle mid nikali then left m check karo  and right m check karo
// agar mid hi kya pta nikl jaye to wahi retun kar do
// other wise left m check karo aur pehli value mid vali k bgl m means left m same mila aur wo first odd nikla to piche aao e = mid -1;
// and in case of mid k right m same nikla aur fir s pehla mid wala hi odd nikla to fir bhi e = mid-1 karo aisi hi hoga 
// and vice-versa
