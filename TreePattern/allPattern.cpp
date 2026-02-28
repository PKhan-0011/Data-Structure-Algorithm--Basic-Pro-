//Test Result
//94. Binary Tree Inorder Traversal.
// root = [1,null,2,3]

#include <iostream>
using namespace std;
#include <vector>;

class Node {
    public: 

    int data;
    Node* left;
    Node* right;
    
    Node(int value){
         this->data = value;
         this->left = nullptr;
         this->right = nullptr;
    }
};

void InOrderTraversal(Node* root){
      // check sabse pehle ki ye kahi like kahli to nahi hai na!..
      vector<int> ans;
      if(root == nullptr){
          return ;
      }

      // abb yha p lagega tera like Inorder wali bat chit okkh!..
      InOrderTraversal(root->left);
       ans.push_back(root->data);
      InOrderTraversal(root->right);
}

