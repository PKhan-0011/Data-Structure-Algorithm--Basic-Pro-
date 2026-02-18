// Revesre of a linkedlist!..

#include <iostream>
using namespace std;

class Node {
     public:
     Node* next;
     int data;

     // constructor ayega!..
     Node(int value){
         data = value;
         next = nullptr;
     }
};

Node* reverseList(Node* head){
    Node* prev = NULL;
    Node* curr = head;

    // ek to ye recusrivve tarikhe s ho sakta hai and ye ek to
    // and ek ye iterative tarikhe s okkh!..
    while(curr != NULL){
        Node* forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }

    return prev;
}

int main(){
   Node* head = NULL;
   reverseList(head);
 
    return 0;
}

// mughe abb mid wala chaiye iska!.. midlenode chaiye!..


#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node(int value){
         data = value;
         next = NULL;
    }
};

int getLength(Node* head){
    int count = 0;
    Node* temp = head;

    while(temp != NULL){
          count++;
          temp = temp->next;
    }
    cout << count << " ";
    return count;
}

int getMiddle(Node* head, int length){
     Node* temp = head;
     int middle = (length >> 1);
     
     for(int i = 0; i< middle; i++){
          temp = temp->next;
     }
     return temp->data;
}

int main() {
    Node* head = NULL;
     
    int length = getLength(head);
    cout << length << " ";
    
   int data = getMiddle(head, length);

   cout << data<< " ";

    return 0;
}