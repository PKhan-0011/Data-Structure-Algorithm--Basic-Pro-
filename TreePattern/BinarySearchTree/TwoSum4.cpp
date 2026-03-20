
#include <iostream>
#include <stack>
using namespace std;

class Node {
    public: 
    int data;
    Node* left;
    Node* right;
};

class solution{
    public: 
    
    bool TwoSumCheck(Node* root, int k ){
         stack<Node*> asc;
         stack<Node*> des;

        Node* t1 = root;

        while(t1){
            asc.push(t1);
            t1 = t1->left;
        }

        while(t1){
            des.push(t1);
            t1 = t1->right;
        }

        while(!asc.empty() && !des.empty()){
            Node* front = asc.top();
            Node* back = des.top();
            
            if(front == back){
                 break;
            }

            int sum = front->data + back->data;

            if(sum == k){
                 return true;
            }

            else if (sum > k){
                 Node* temp = des.top();
                         des.pop();
                 temp = temp->left;
                 while(temp){
                     des.push(temp);
                     temp = temp->right;
                 }        
            }
            else{
                  Node* temp = asc.top();
                               asc.pop();
                 temp = temp->right;
                 while(temp){
                     des.push(temp);
                     temp = temp->left;
                 } 
            }
        }
        return false;
    }
};