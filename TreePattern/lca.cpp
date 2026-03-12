// lowest common ancestor of a binary tree..

#include <iostream>
using namespace std;

class TreeNode {
    public:
     
    int data;
    TreeNode* left;
    TreeNode* right;

};

class Solution {
   public: 
   TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
    
        if(root == NULL){
            return NULL;
        }

        if(root == p){
            return p;
        }

        if(root == q){
            return q;
        }

        TreeNode* leftValue = lowestCommonAncestor(root->left, p, q);
        TreeNode* rightValue = lowestCommonAncestor(root->right, p, q);
        
        // there are four condtion that will be face when we will fiinOut the target okkh!..

        if(leftValue == NULL && rightValue == NULL){
               return NULL;
        }

        if(leftValue == NULL && rightValue != NULL){
            return rightValue;
        }

        if(leftValue != NULL && rightValue == NULL){
             return leftValue;
        }
        
        else
        return root;
   }
};