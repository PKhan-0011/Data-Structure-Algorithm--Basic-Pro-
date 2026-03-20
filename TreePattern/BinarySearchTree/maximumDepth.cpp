#include <iostream>
using namespace std;

class Node {
      public:
      int data;
      Node* left;
      Node* right;

      Node(int value){
          data = value;
          left = nullptr;
          right = nullptr;
      }
};

class solution {
     public: 
         int maxDepth(Node* root) {
             if(root == nullptr){
                return 0;
             }

             int left = maxDepth(root->left);
             int right = maxDepth(root->right);

             int sum = max(left, right) + 1;

             return sum;
         } 
}; 