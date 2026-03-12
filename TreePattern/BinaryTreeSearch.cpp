// search Target in a Binary Tree!..

class TreeNode{
     public: 
     int data;
     TreeNode* left;
     TreeNode* right;

     TreeNode(int value){
        data = value;
        left = nullptr;
        right = nullptr;
     }
};

class solution {
     public: 
     TreeNode* getValue(TreeNode* root, int target){
        if(root == nullptr){
           return nullptr;
        }

        if(root->data == target){
            int ans = root->data;
        }

        // preOrder travsersal kar rha hu to is case m mai..
        getValue(root->left, target);
        getValue(root->right, target);
     }
};