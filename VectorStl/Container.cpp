// In Conatiner 6 chize ati hai 
// Vector, List, queue, stack, set and map,

#include <iostream>
#include <vector>
using namespace std;

int main() {
    // craeteing a vector here!..
    vector<int> ans(5,10);
    // intailizing a vector size!..
    // vector<int> ans(5); // 5 size ka array ban gya hai ye okkh!..
    
    // vector<int> ans(5, 0); // 5 size kaarray value uske andar 0 hai 5chi jagah okkh!.. [0,0,0,0,0]; 
     
   cout <<  *ans.begin() << endl;
   cout << *ans.end() << endl; // iska address aa rha hai valuee nahi aa rhi hai okh!..

   // * laagne s aage value pprint hogi us array kii okkh!..


    return 0;
}

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

// List wala bhi ata hai ek!.. list wale ki ek creation bhi dekh l sahi s okkkh!..


#include <iostream>
#include <list>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

     list<int> nums;
     
     // isme abhi kuch fix nahi hai like ki size and value to mai yha p psuh karunag like nums.push_back(10);
     // ek array banega jisme [10,] ayega and ata jayeyga okkh!..

     nums.push_back(10);
     nums.push_back(20);
     nums.push_back(30);
     nums.push_back(40);
     
     // yha s array ayega like [10,20,30,40] okkh!...;

     // agar mai itterate karne ki koshish karu to wo iterator k through hoga okkh!..

    //  vector<int> :: iterator it = nums.begin();
     
    // //  for(int it: i){
    // //       cout << nums[i] << endl;
    // //  }

    // agar mughe auto nahi dena to mai iterator lunga okkh vector type ka okkh!.

    // vector<int>:: iterator  it = nums.begin();

    for(auto it = nums.begin(); it != nums.end(); it++){
        cout << *it << " ";
    }
     
    // abb mai push karna chahta hu first wala okkh!..

    nums.push_front(20);  // isse existing array m 10 push ho jayega okkh!..
    nums.pop_front();
    
    nums.push_back(50); // ye existing array k last wale m push hoga okkh!..
    //nums.pop_back();  // ye isse last wala pop ho jayega okh!.
   
    reverse(nums.begin(), nums.end()); // ye start s leke end tak reverse kar dega okkh!..

    // for(auto it = nums.begin(); it != nums.end(); it++){
    //       cout << *it << " ";
    // }

    // getting array by iterator.. 

    list<int> :: iterator it = nums.begin();

    while(it != nums.end()){
          cout << *it << " ";
          it ++;
    }

    // remove an element!>.

    nums.remove(10);

    for(auto it2 = nums.begin(); it2 != nums.end(); it2++){
          cout << *it2 << " ";
    }
     
    // insert agar karna hoga mughe to mai insert kasie karta hu like mughe pehle 
    // uski postioning deni padegi and then kya insert karna hai wo dena ppadega okkh!..
    // for an example!>.

     // list mai insertion kuch alg tarikhe s hota hai okkh!..

     // for an example!..

    //  auto it = nums.begin();
    //  advance(it, 3);

    //  nums.insert(it, 10)

    //  while(it3 != nums.end()){
    //     cout << *it3 << " ";
    //     it3++;
    //  }
     

     return 0;
}


// Queue.. data structure okkh!..

// isme bhi zada kuch nahi hai bass tera empty, size, push, pop, front() back(),  
// push s data piche lagte jayega okkh! and pop s data delete oga from piche okh!..

#include <iostream>
#include <queue>
using namespace std;


int main() {
    queue<int> q;

    q.push(10);
    // 10-> 
    q.push(20);
    // 10->20
    q.push(30);
    // 10->20->30;
    q.push(40);
    // 10->20->30->40;
   
    q.front() ; // 10 ayega okkh!..
    q.back(); // 40 ayega okkh!.
    
    q.pop(); // always front wala hoga okkh!.. bcz yha p hamne intailze todhi kiya hai like ki front ka hai ya back ka hai okkh! like q.push_back() q.pop_back() etc etc okkh!>.
    
    
    if(q.empty() == true){
          cout << "kahli hai queue apna okkj!" << " ";
    }else{
         cout << "queue khali nahi hai okh!" << " ";
    }
    
    cout << q.size() << endl; // isse quueu ki size aa jaygei okkh!>.

    // iterator ayega abb yha p 

    return 0;
}