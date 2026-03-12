// 700. Search in a Binary Search Tree

class TreeNode{
    public: 
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int value){
        val = value;
        left = nullptr;
        right = nullptr;
    }
};

class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        TreeNode* ans = nullptr;
        
        if(root == nullptr){
              return nullptr;
        }

        if(root->val == val){
             ans = root;
        }

        else if(root->val > val){
             return  searchBST(root->left, val);
        }
        else{
           return searchBST(root->right, val);
        }
            return ans;
    }
};