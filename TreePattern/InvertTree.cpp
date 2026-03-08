#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

class solution {
    public: 
    int val;
    TreeNode* left;
    TreeNode* right;
};


class Solution {
public:
    
    TreeNode* invertTree02(TreeNode* root1, TreeNode* root2){
           if(root1 == nullptr && root2 == nullptr){
                  return;
           }
        
        // return and break jo hota hai wo like 
        // break s hamm loop ko rok dete hai and return s ham, 
        // pura function hi rok dete hai okkh!..
        swap(root1, root2);

        invertTree02(root1->left, root1->right);
        invertTree02(root2->left, root2->right);

    }

    TreeNode* invertTree(TreeNode* root) {
        if(root == nullptr){
             return {};
        }

        TreeNode* nextRoots = invertTree02(TreeNode* root->left, TreeNode* root->right);

        // abb yha s jo node extra banega usme level order traversal lag jayega okkh!..
       

    }
};