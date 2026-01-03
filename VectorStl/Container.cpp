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
   
    q.front(); // 10 ayega okkh!..
    q.back(); // 40 ayega okkh!.
    
    q.pop(); // always front wala hoga okkh!.. bcz yha p hamne intailze todhi kiya hai like ki front ka hai ya back ka hai okkh! like q.push_back() q.pop_back() etc etc okkh!>.
    
    if(q.empty() == true){
          cout << "kahli hai queue apna okkj!" << " ";
    }else{
         cout << "queue khali nahi hai okh!" << " ";
    }
    
    cout << q.size() << endl; // isse quueu ki size aa jaygei okkh!>.

    // iterator ayega abb yha p 
     
    while(!q.empty()){
         // jab tak tera queue khali nahi ho jata ta tak aage badho okkh!..
         cout << q.front() << " "; 
         q.pop();  // iska matlb ye ahi like ki front() wale ko pop print karo and then usi ko pop kardo okkh!..
    }
     
    return 0;
}

// iske baad stack ata hai okkh!.. 
// stack m hamm generallyy kuch chizo ka dhyan rakhte hai like..
// empty(), size, push(), pop(), top(), // baas itna h =i hai okkh!..
// top() s mai sabse upar wale ko excess kar leta hu okkh!..

#include <iostream>
#include <stack>
using namespace std;

int main() { 

    stack<int> s;
    
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    // ek array ban gayi hai ye okk!.
    // 10->20->30->40; 

    s.pop(); // isse first elemnet dikhega okkh!..
    s.top(); // jo sabse upar element hoga wo dikhega okkh!..

    s.size(); // isse size aa jayega uska pure stack ka okk!..

    s.empty(); // isse check karte hai hamm ki ye empty to nahi hia if yes to kcuh aur return kar do okh!,

    // iterarte karne k liye mughe!>> yha p s.empty check karna padega okkh!.
    // iterator s hamm nahi kar skte okkh!.. like iterator::it isse nahi kar sakte hamm 


    while(!s.empty()){
         cout << s.top() << endl;
           s.pop(); // yha p abhi bhi dout hai todha sa like ki ye kyu aa rha hai okkh! iski jagah kuch aur hona chiaye tha bcz s.pop() to first remove karta tha na like s.pop_first() okkh!..?? 
    }
    
    return 0;
}

// de-queue:- dubly-standard-queue;

























// map and set..;

#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

int main() {
   unordered_map<string, string> table;
    
   // insertion ayega abb yha p like isme mughe insert karna hoga, and data key and value m 
   // m dali jayengi okkh!.. 

   table["in"] = "India";

   table.insert(make_pair<string, string>("In", "Indian"));

   pair<string, string> p;
   p.first = "br";
   p.second = "Brazil";

   // abb mughe ise table m add karna hoga okkh!...

   table.insert(p);

  unordered_map<string, string> :: iterator it = table.begin();

  while(it != table.end()){
       pair<string, string> p = *it;// isse mai first value pajd lunga okkh!.
       cout << p.first << " " << p.second << " ";
       it++;
  }

  cout << table.size();

  table.clear();

  table.erase(table.begin(), table.end());
   
  // yha p hamara find wala ata hai okkh!..
    
  if(table.find("In") != table.end()){
       // iska matlb ye hai ki hamare pass wo value present hi nahi hai okkh!.
       cout << "end tak nahi gya hai iska matlb ye hai ki ye value present hai okkh!" << " ";
  }
  else {
      cout << "iska matlb ye hai ki value present hi nahi hai hamm end tak aa gye table k!";
  };

  // count m do chize ati hai 0 ya fir 1 okkh!..
 // if zero to wo presnet hi nahi hai okkh!..

 if(table.count("In") == 1){
     cout << "ye value present hai" << " ";
 }
 else if(table.count("In") == 0){
      cout << "ye value present hi nahi hai okkjh!" << " ";
 }  
 
 // dekh count aur fiind mai hamm value dete hai usme okkh!.. like ("In") key type ka 
 // 

    return 0;
}

