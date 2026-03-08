#include <iostream>
using namespace std;

class TreeNode {
      public: 
      int val;
     TreeNode* left;
     TreeNode* right;

     // yha p constructor bhi ban ta hai ye dhyan s okh!..
};

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        // yha p isko solve karne k liye like 2-3 chize karni hoti hai!..
          if(p == nullptr && q == nullptr){
             return true;
        };

        // if(p == nullptr && q != nullptr){
        //     return false;
        // }

        // if(q == nullptr && p != nullptr){
        //     return false;
        // }

        if(q == nullptr || p == nullptr){
            return false;
        }

        if(p->val != q->val){
            return false;
        }
        

        bool ans = isSameTree(p->left, q->left);
        bool ans2 = isSameTree(p->right, q->right);

        return ans && ans2;

    }
};