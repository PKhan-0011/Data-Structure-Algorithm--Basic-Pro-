//102. Binary Tree Level Order Traversal
// mughe isme ek 2-d array jaisa kuch return karna hai in level orderwale mai okkh!..

#include <iostream>
using namespace std;
#include <algorithm>
#include <queue>
#include <vector>

class TreeNode {
    public: 
    int val;
    TreeNode* left;
    TreeNode* right;

};

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        // yha p mughe like ek vector lena hai and and 
        // queue lena hai okkh uske according hi chize mai kar lunag okkh!..
        
        if(root == nullptr){
             return {};
        }

        vector<vector<int>> ans;
        queue<TreeNode*> q;
         q.push(root);
        // ye jo hai wo like agar root kahli hai koi element nahi ai isme to ye checking hogi isme okkh!.

        while(!q.empty()){
             // jab tak queue kahli nahi hoga tab tak aage badna hai!..
             vector<int> temp;
             int qSize = q.size();

             while(qSize--){
                  // abb yha s like front nikl or temp m push krde okh!..
                  TreeNode* node = q.front();
                              q.pop();

                              temp.push_back(node->val);

                              if(node->left != nullptr){
                                 q.push(node->left);
                              }

                              if(node->right != nullptr){
                                q.push(node->right);
                              }
             }

             ans.push_back(temp);
        }
        return ans;
    }
};

class Solution {
public:
    vector<int> levelOrder(TreeNode* root) {
         
        // dekh yha p mughe is case m like ek single hi array return karna hai 
        // koi vector<vector> wala nahi chaiye to kaise karenge okkh!...
         
        vector<int> ans;
        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()){
            TreeNode* node = q.front();
                             q.pop();

                             ans.push_back(node->val);
                             // left wala and right wala dono push karna hai in a array to dekh kuch aisa hoga!..
                             if(node->left != nullptr){
                                  q.push(node->left);
                             }
                             if(node->right != nullptr){
                                q.push(node->right);
                             }
        }
        return ans;
    }
};


//107. Binary Tree Level Order Traversal II

class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        // dekh iskko karne ka first tarikha jo hai wo like 
        // normal traversal karde bad m reverse kar diyo.. 
        // bcz niccche s upra aane ka koi tarikha hi nahi hai okkh!..

        if(root == nullptr){
            return {};
        };
         
        vector<vector<int>> ans;

        queue<TreeNode*> q;

        q.push(root);

        while(!q.empty()){
            // mughe abhi bhi vector wala hi chaiye..
            // to mai isme extraSize lunga wo store karuga kisi aur arrau m like tenp array m uske baad 
            // original array m push kr dunga!..
            vector<int> temp;
            int size = q.size();

            while(size--){
                TreeNode* node = q.front();
                                  q.pop();

                                  temp.push_back(node->val);

                                  if(node->left != nullptr){
                                       q.push(node->left);
                                  }
                                  if(node->right != nullptr){
                                     q.push(node->right);
                                  }
            }
            ans.push_back(temp);
        }
         reverse(ans.begin(), ans.end());
       return ans;
    }
};