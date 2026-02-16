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

void insertAtPosition(int position, int value, Node* head, Node* tail, int count02){
    if(position == 1){
         // head wali bat chit ayegi okkh!..
         head = InsertHead(value, head, tail);
    }

    else if(position ==  count02+ 1){
         tail = InsertedAtTail(value, head, tail);
    }
    else{
         // is case m mai dekh rha hu like ki postion zada hai like more than 1 or less than tail okh!.
         Node* temp = head;
         for(int i = 0; i<position-2; i++){
              temp = temp->next;
         }
         // yha p jo temp hai wo uski postion aa gyii hai barabar okkh!..
         Node* newNode = new Node(25);
         // step's are important!.. 
         newNode->next = temp->next;
         temp->next = newNode;
    }
}

bool SearchInLinkedList(Node* head, Node* Tail, int value){
       Node* temp = head;
       while(temp-> next != NULL){
            if(temp->data == value){
                 return true;
            }
            temp = temp->next;
       }
       return false;    
}

void deleteNodes(Node* head, Node* tail, int postion){
     // sabse first case jo ayega wo like yhai hai ki agar head aur tail dono null hai!.
     // is case m empty ka case h ye okkh!..
     if(head == NULL && tail == NULL){
           cout << "Empty wala case h bhai ye!.." << " "; 
     }

     //jab ek hi node ho okkh!..
     else if(head == tail){
            // means ek hi node hai unke pass okkh!..
            Node* temp = head;
            head = NULL;
            tail = NULL;
            delete temp;
     }
     else {
            // ye wala case h jab hamare pass like multiple nodes hai!..
             if(postion == 1){
                 // ki mai first wala delete karna chahta hu okkkh!..
                 Node* temp = head;
                 head = temp->next;// update hai ye!..
                 temp->next = NULL;
                 delete temp;
             }
             
             // agar koi alg postion hui us case m mughe alag hi karna hai kuch okkh!.
             else{
                // postion bich ka hai kuch okkh!..
                Node* temp = head;
                for(int i = 0; i<postion-2; i++){
                    temp = temp->next;
                }
                Node* newNode = temp->next;
                temp->next = newNode->next;
                newNode->next = NULL;
                delete newNode;
             }
     }
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

 // insertion in between!..

 insertAtPosition(3, 45, head, tail, count02);

    return 0;
}

