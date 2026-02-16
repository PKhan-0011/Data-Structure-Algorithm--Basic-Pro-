#include <iostream>
using namespace std;

class Node {
    public:
    Node* prev;
    int data;
    Node* next;

    // condtructor banega okkh!..
    // constructor ka use mai is liye karta hu bcz jab bhi 
    // ye intailize hoga node to uske andar mai prev data and next autmaticaly aa jayega okh!..
    Node(int value){
          prev = NULL;
          data = value;
          next = NULL;
    }
};

// insertion ata hai ek case m okkh!.. 

void InsertionAtHead(int value, Node* &head, Node* &tail){
      // empty hai to first wala null and second wala bhi null hai okkh!..
      if(head == NULL && tail == NULL){
            Node* newNode = new Node(value);
            head = newNode;
            tail = newNode;
      }
      else{
           // mughe yha p head p insert karna hia agr ll empty nahi hai us case m okh!..
            Node* newNode = new Node(value);
            newNode->next = head;
            head->prev =   newNode;
            head = newNode;        
      }
}

void insertAtTail(int value, Node* &head, Node* &tail){
   // emplty wala case okkh!..
   
}

void print(Node* head){
     Node* temp = head;
     while(temp != NULL){
          cout << temp->data << " ";
          temp = temp->next;
     }
}

void printReverse(Node* tail){
      Node* temp = tail;
      while(temp != NULL){
           cout << temp->data << "->";
           temp = temp->prev;
      }
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;

    InsertionAtHead(10, head, tail);
    InsertionAtHead(20, head, tail);
    InsertionAtHead(30, head, tail);

    print(head);
     cout << endl;
    printReverse(tail);

    return 0;
}
