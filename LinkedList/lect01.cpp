// first question of linkedlist!..

#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

     // condtructor!.. 
     Node(int value){
          data = value;
          next = nullptr;
     }
};

Node* InsertHead(int value, Node* head, Node* tail){
     // null wala check!..
     if(head == NULL && tail == NULL){
           // iska matlb hai ki ye khali wale p hai okkh..
           Node* data = new Node(10);
           head = data;
           tail = data;
     }
     else{
        // iska mtlb ye hai ki ye empty nahi hai!..
        Node* newNode = new Node(30);
        newNode->next = head;
        head = newNode;
     }

     return head;
}

// ternaitry opertor ka use karo like;

void print(Node* head){
     Node * temp = head;

     while(temp != NULL){
          cout << temp->data << endl;
          temp = temp->next;
     }
}

Node* InsertedAtTail(int value, Node* &head, Node* &tail){
      if(head->next == NULL && tail->next == NULL){
         // kuch hai hi ni uske pass!..
         // mughe create karna padega okkh!..
         Node* TailNode = new Node(50);
         head = TailNode;
         tail = TailNode;
      }

      // agar mere pass already sab chiz hua like already mere pass data hua 
      else{
            Node* TailNode = new Node(50);
            tail->next = TailNode;
            tail = TailNode;
      }
   return tail;
}

int getLength(Node* head, Node* tail, int count){
     // agar null hai to fir mai kuch nahi karunga okkh!..
     if(head == NULL && tail == NULL){
           return count;
     }
     else if(head->next != NULL){
          count++;
          head = head->next;
     }
    return count;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

   head = InsertHead(10, head, tail);
   head = InsertHead(20, head, tail);
   head = InsertHead(30, head, tail);
    print(head);
   tail = InsertedAtTail(40, head, tail);
   print(head);

 int count = 0;

 int count02 =  getLength(head, tail, count);
  
 cout << count02 << endl;

    return 0;
}