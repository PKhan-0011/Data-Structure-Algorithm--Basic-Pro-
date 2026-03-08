class TreeNode {
    public:
    int val;
    TreeNode* left;
    TreeNode* right;
};

class Solution {
public:
     
    bool sameTree(TreeNode* root1, TreeNode* root2){
         // yha p chize check karunga apni taraf s okkh!..
         if(root1 == nullptr && root2 == nullptr){
             return true;
         }
        
        if(root1 == nullptr || root2 == nullptr){
            return false;
        }

        if(root1->val != root2->val){
             return false;
        }

        bool ans1 = sameTree(root1->left, root2->right);
        bool ans2 = sameTree(root1->right, root2->left);

        return ans1 && ans2;
    }

    bool isSymmetric(TreeNode* root) {
        return sameTree(root->left, root->right);
    }
};