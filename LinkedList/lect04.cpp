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
             temp = prev->next; // ye mai bhul jata hu iska dhyan rakhio sahi s okkh!>
        }
     }
        return head;
    }
};


// gfg quuestion Sort a linkedlist 0,s 1's 2's!..
// zeroCount, OneCount, and Two's Count in a linkedlist!..

// mai isko do tarikhe s solve kar skte hai first extra sppace leke like extra linkedlist leke =!..
// aur ek ek same linkedlist m hi karde!..

class Node{
      public:
      Node* next;
      int val;

      Node(int value){
          next = NULL;
          val = value;
      }
};

class Solution {
  public:
    
    void insertAtTail(Node* toMove, Node* head, Node* tail){
          // ek ayega tera like empty wala case okkh!..
          if(head == NULL && tail == NULL){
               head = toMove;
               tail = toMove;
          }
          else {
              // agar empty nahi hai us case m kya karna hai okkh!..
               tail->next = toMove;
               tail = tail->next;
          }
    }


    Node* segregate(Node* head) {
        // code here
        Node* zeroHead = NULL;
        Node* zeroTail = NULL;

        Node* oneHead = NULL;
        Node* oneTail = NULL;

        Node* twoHead = NULL;
        Node* twoTail = NULL;
        
        Node* temp = head;
        
        while(temp != NULL){
             Node* toMove = temp;
             temp = temp->next;
             toMove->next = NULL;
             
             // yha s toMOve jo hai wo NULL mark ho gya hai ye dhyan s kario okkh!..
              // abb yha s check karle like ki jo tera toMove hai wo 0 hai ya 1 hai ya 2 hai okkh!..
            if(toMove->val == 0){
                 insertAtTail(toMove, zeroHead, zeroTail);
            }
            else if(toMove->val == 1){
                insertAtTail(toMove, oneHead, oneTail);
            }
            else {
                 insertAtTail(toMove, twoHead, twoTail);
            }
        }

        // abb jaise hi loop kahtm hoga okkh!..
        // to mere pass zeroCount hai oneCount ka hai aur 2's count ka bhi hai okkh!..
        // abb mughe zeroCount oneCount and twoCount ko merge karna hai okkh!..
         
        if(zeroHead != NULL){
              // mere pass zero ka sara data hai okkh!.
              if(oneHead != NULL){
                  // yha p like oneHead jo hai wo null nhai hai abb mai connect kar sakta hu okkh!..
                  zeroTail->next = oneHead;
                  // yha p twoHead null ho ya na ho dono chalega okkh!..
                  oneTail->next = twoHead;
              }else{
                 // agar one null hai to zeroHead two Head s nil jayega okkh!..
                 // yha s twoCount nahi bhi hoga to chalega and twoHead ko check karne ki need bhi nahi hai okkh!..
                   zeroTail->next = twoHead;
              }
              return zeroHead;
        }
        else{
            // yha p zeroHead nullhai okkh!..
            if(oneHead != NULL){
                 oneTail->next = twoHead;
                 // mai agar niche wala nhi bhi karunga to chal jayega okkh!.
                 // return oneHead;
            }
            else{
                  return twoHead;
            }
            return oneHead;
        }
    }
};