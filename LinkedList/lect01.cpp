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
}

void print(Node* head){
     Node * temp = head;

     while(temp != NULL){
          cout << temp->data << endl;
          temp = temp->next;
     }
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

   head = InsertHead(10, head, tail);
   head = InsertHead(20, head, tail);
   head = InsertHead(30, head, tail);

   print(head);

    return 0;
}