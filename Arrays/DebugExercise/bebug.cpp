// first question #include<iostream>
#include <iostream>
using namespace std;

int main(){
    int n, sum = 0;
    cin >> n;
    int input[n]; // ye array hai ek tarike ka 
    for(int i=0;i<n;i++){
        cin >> input[i];
    }
     for(int i=0; i<n; i++){
         sum = sum + input[i];
     }
    cout << sum << endl;
    return 0;
}

// above wale m kuch chize thi error like sum hamne nah diya tha okkh!.. like sum intailize hi nahi kiya tha 
// input bhi galt le rahe the input[n] le rahe the hamm instead of i okkh!..

// 2nd question...

bool linearSearch(int arr[], int n ,int val){
    for(int i=0;i<n;i++){
        if(arr[i]==val){
            return true;
        }
    }
    return false;
}

// void tha yha p uski jagah bool ya fir integer lenge okkh!..

// 3rd question of an array!..

void populate(int arr[],int n){
    int j=0;
    for( int i = 0; i < n; i = i + 2){
        arr[n-j-1] = i+2;
        arr[j] = i+1;
        j++;
    }
}

// ye arra wale m kuch gdbd hai ye bass dhyan rakhio like n-j-1 s hoga okkh!..

// 4th question;
void swapAlternate(int arr[],int size){
    for(int i=0;i<size-1;i=i+2){
        int temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
    }
}

// ya fir apna logic lga le!..
void swapAlternate(int arr[],int size){
    for(int i=0;i<size-1;i=i+2){
        int temp = arr[i+1];
        arr[i+1] = arr[i];
        arr[i] = temp;
    }
}

// 5th question..

int pairSumToX(int input[], int size, int x){
	int pairs = 0;
	for(int i=0; i<size; i++){
		for(int j=i+1; j<size; j++){
			if(input[i] + input[j] == x) pairs++;
		}
	}
	return pairs;
}

// 6th question bhi similar hi hai like isme mughe sum hi karna haii okkh!.

int tripletSumToX(int input[], int size, int x){
	int triplets = 0;
	for(int i=0; i<size; i++){
		for(int j=i+1; j<size; j++){
			for(int k=j+1; k<size; k++){
				if(input[i] + input[j] + input[k] == x) triplets++;
			}
		}
	}
	return triplets;
}

// 7th question yha p!..
// incorrect code!..
void sort0sand1s(int input[], int size){
	int nextZero = 0;
	for(int i=0; i<size; i++){
		if(input[nextZero] == 0){
			int temp = input[nextZero];
			input[nextZero] = input[i];
			input[i] = temp;
		}
	}
}

//correct code!..void sort0sand1s(int input[], int size){
void sort0sand1s(int input[], int size){
	int nextZero = 0;
	for(int i=0; i<size; i++){
		if(input[i] == 0){
			int temp = input[nextZero];
			input[nextZero] = input[i];
			input[i] = temp;
            nextZero++;
		}
	}
}
