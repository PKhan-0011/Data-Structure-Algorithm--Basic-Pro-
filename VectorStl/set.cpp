// yha p hame set mai kuch chize dekhne ko milti hai okkh!..
// like data jo hai wo unique milti hai koi duplicate nahi milta okkh!..

#include <iostream>
#include <set>
using namespace std;

int main() {
    
    set<int> st; // ordered set hai ye isme data ordered m hoga and dubkicate nahi aa rha hoga okkh!..
    
    st.insert(10);
    st.insert(10);
    st.insert(20);
    st.insert(30);
    st.insert(40);
    st.insert(50);
    st.insert(40);

    // abb iterate karunga ise!..

    cout << st.size();  // isme bhi mugeh usi data ka size ayega jo unique hai okh!.

    st.clear(); 
    
    set<int> :: iterator it = st.begin();

    while(it != st.end()){
        cout << *it << endl;
        it++;
    }
     
    // yha p value jo hai wo duplicate nahi ayega okkh!.. sab unique hi print hoga okkh!..

    // erase, clear, find and count 

    st.erase(st.begin(), st.end()); // isse sara earse ho jayega;

    if(st.find(10) != st.end()){
          cout << "Ye data mughe mil gya hai okh!" << " ";
    }
    else{
         cout << "data not there!" << " ";
    }
    
    // ek count wali bat chit ati hai yha p okkh!..

    if(st.count(10) == 0){
       cout << "iska mtlb ye hai ki 10 nahi present hai given array me okkh!." << " ";
    }
    else if(st.count(10) == 1) {
         cout << "data present hai okh!." << " ";
    }
    return 0;
}