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
   if(head == NULL && tail == NULL){
       Node* newNode = new Node(value);
       tail = newNode;
       head = newNode;
   }
   // but agar empty nahi hai is case m kya karenge ye batao okkh!..
   else{
        Node* newNode = new Node(value);
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
   }
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

int getLength(Node* head, Node* tail) {
     Node* temp = head;
     int count = 0;
     while(temp->next != NULL){
          count++;
          temp = temp->next;
     }
     return count;
}

void InsertAtPosition(int value, Node* &head, Node* &tail, int position){
     // agar postion one hui to ye head p laega okkh!.
     int len = getLength(head, tail);
     if(position == 1){
          InsertionAtHead(value, head, tail);
     }
     
     else if (position == len + 1){
           // mai last p hu okkh! abb mughe yha p tail wla lga dunga okkh!..
           insertAtTail(value, head, tail);
     }

     else{
           Node* newNode = new Node(value);
           Node* temp = head;
           for(int i = 0; i<position-2; i++){
               temp = temp->next;
           }
           Node* forheadNode = temp->next;
           temp->next = newNode;
           newNode->prev = temp;
           newNode->next = forheadNode;
           forheadNode->prev = newNode;
     }
}

void SearchTarget(Node* head, Node* tail, int target){
        Node* temp = head;
        while(temp->next != NULL){
             if(temp->data == target){
                  cout << temp->data << " ";
             }
              temp = temp->next;
        }
}

// deletion of linkedlist!..
void deletetionOfNodes(Node* head, Node* tail, int position){
        // yha p multiple cases banenge okkh!.
        if(head == NULL && tail == NULL){
            // ye emppty wali bat chit hai okkh!..
            cout << "node hi empty hai mere bhai!.." << " ";
        }
        else if(head == tail){
               // iska mtlb ye hai like ki head aur tail dono hi same point p hai okkh!..
                Node* temp = head;
                head = NULL;
                tail = NULL;
                delete temp;
        }

        else {
              // agar man le kahi bich m hua wo tab kaise larunga ye batao okkh!..
               if(position == 1){
                    // ye head wala hai okkh !..
                    Node* temp = head;
                    head = temp->next;
                    temp->next = NULL;
                    head->prev = NULL;
                    delete temp;
               }
               else{
                   // agar postion kahi bich mai tab kya karna hai okkh!..
                   Node* temp = head;
                   for(int i = 0; i<position-2; i++){
                       temp = temp->next;
                   }
                   Node* deleteNode = temp->next;
                   Node* NextNode = deleteNode->next;
                   temp->next = NextNode;
                    NextNode->prev = temp;
                    deleteNode->next = NULL;
                     deleteNode->prev = NULL;
                     delete deleteNode;
               }
        }
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;

    // InsertionAtHead(10, head, tail);
    // InsertionAtHead(20, head, tail);
    // InsertionAtHead(30, head, tail);
    
    int ans = getLength(head, tail);

    int position = 3;
    insertAtTail(10,head, tail);
    insertAtTail(20, head, tail);
    InsertAtPosition(40, head, tail, position);

    SearchTarget(head, tail, 50);

    print(tail);
     cout << endl;
    printReverse(tail);

    return 0;
}
