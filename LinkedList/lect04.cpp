// 141. LinkedList Cycle Detect!..

#include <iostream>
using namespace std;
#include <vector>
#include <unordered_map>

class Node {
    public:
     Node* next;
     int val;

     // contructor!..
     Node(int val){
          next = NULL;
          val = val;
     }
};

bool hasCycle(Node* head){
      // ek map ke tarikhe s h jayega okkh!>.
      unordered_map<Node*, bool> map;
       Node* temp = head;

       while(temp != NULL){
          // ye temp jo null check kar rha hu mai ye isliye kar rha hu bca agar loop nah ihoga to wo break ho jayega 
          // agr cycle hua to usi m ghumta rajega okkh!..
          if(map.find(temp) != map.end()){
              // iska matln ye hai like ki map m ye chize present hai yano cycle hai mere pass okkh!.
              return true;
          }
          map[temp] = true;
          temp = temp->next;
       }
       // cycle break ho gya hai okkh!>.
       return false;
}
  

int main() {
    Node* head = NULL;
   bool ans =  hasCycle(head);

   cout << ans << " ";

    return 0;
}

// above wale ki t.c 0(N) ans s.c O(n);

// dusra method ayega like fast and slow pointer wala!..

#include <iostream>
using namespace std;

class ListNode {
     public:
     ListNode* next;
     int data;

     // construcotr!..
     ListNode(int val){
        next = NULL;
        data = val;
     }
};

bool hasCycle(ListNode* head){
      // fast and slow pointer!...
      ListNode* fast = head;
      ListNode* slow = head;

      while(fast != NULL){
         fast = fast->next;
         if(fast != NULL){
              fast = fast->next;
              slow = slow->next;
              
              // agar yha bhi fast agar null hota hai to smjh le cycle nahi hai okkh!>.
              if(fast == slow){
                return true;
              }
         }
      }
      // fast jaise hi null hua cycle break ho jayegi okh!..
      return false;
}


int main() {
    
   ListNode* head = NULL;
   bool ans =  hasCycle(head);

   cout << ans << " ";

    return 0;
}

// yha p kabhi bhi question karega Linkedlist ke to edge cases ka dhyan rakhio okkh!> 
// single wala aur empty wala kkh!>
// 83.Remove duplicates from a sorted list!..

class ListNode {
     public:
     int val;
     ListNode* next;

     // constructor!.
     ListNode(int value){
         next = NULL;
         val = value;
     }
};

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
     
     // edge cases dekhhne hai mughe yha p like agar single node hua tab ya fir empty hua us case m kya karna hai ye sab dekh okkh!..

     if(head == NULL){
          return head;
     }

     else if (head->next == NULL){
          return head;
     }
     else{
         ListNode* prev = head;
         ListNode* temp = head->next;
         
        while(temp != NULL){
            //  temp = prev->next; ye bar bar update kar de rha ahi bass yahi dikat hai iksi okkh!..
             // sabse pehle mai yha check karunga like ki ye aage ka data aur prev ka data dono barabar hai ya nhai okkh! agr barabar hua to remove okkh!.
             if(prev->val == temp->val){
                  // remove karna hai yha p!..
                  prev->next = temp->next;
                  temp->next = NULL;
                  delete temp;
             }
             else {
                 temp = temp->next;
                 prev = prev->next;
             }
             temp = prev->next;
        }
     }
        return head;
    }
};