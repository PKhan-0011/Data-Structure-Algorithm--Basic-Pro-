#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

class Solution {
    public: 
    int val;
    TreeNode* left;
    TreeNode* right;
};


class Solution {
public:
     
   vector<int>  levelOrderOnAboveTree(TreeNode* nextRoots){
           if(nextRoots == nullptr){
              return {};
           }

           queue<TreeNode*>q;
           vector<int> ans;
           q.push(nextRoots);

           while(!q.empty()){
                int size = q.size();
                vector<int> temp(size);

                while(size--){
                    TreeNode* val = q.front();
                                      q.pop();

                                      temp.push_back(val);
                       // abb mere temp mai kuch aisa hai!.. [2]
                       
                       // yha p check hoga like ki ye iska Treenode ka left and right null to nahi
                       // agar null nahi hai to wo loop m jayega okkh!..
                       if(val->left != nullptr){
                            q.push(val->left);
                       }

                       if(val->right != nullptr){
                         q.push(val->right);
                       }
                }
               for(auto x: temp){
                 ans.push_back(x);
               }
                 
           }
           return ans;
   }

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
          vector<int> array = levelOrderOnAboveTree(TreeNode* nextRoots);     

    }
};