// k-diff pair in an array!..

#include <iostream>
#include <set>
using namespace std;

int getNumberOfDiifPair(int arr[], int size, int k){
         int ans = 0;
        set<pair<int, int>> st;   // iski s.c zada ho jayegi okkh!..
      for(int i = 0; i< size; i++){
          for(int j = i+1; j< size; j++){
                // yha s mughe bhut sare pair milenge okkh!..
                // like 3,1 3,4, 3,1, 3,5, 1,4 1,1 1,5 4,1,4,5 1,5 
                int a = min(arr[i], arr[j]);
                int b = max(arr[i], arr[j]);

                st.insert({a,b});

                // yha s set jo hai wo iterator return karega to muge agar sare pair dekhne hai 
                // to mai iterator s dekh lunga okkh!..
          }
      } 
      for(auto it: st){
        cout << it.first << " " << it.second << endl;
         
         int diff = abs(it.first - it.second);

         if(diff == k){
              ans++;
         }
      }  
      return ans;     
}


int main () {
      int arr[] = {1,1,1,1,1};
      int size  = 5;
      int k = 0;

      int ans = getNumberOfDiifPair(arr, size, k);
      cout << ans << " ";
      return 0;
}

// iski jo t.c hai wo zada aa rha hai okkh!.. 

// iska optimze version likh!..


