/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    private: 
        void inorder(TreeNode* root,TreeNode* &a){
            if(root==NULL){
                return;
            } 
            inorder(root->left,a);
            a->right=new TreeNode(root->val);
            a=a->right;
            inorder(root->right,a);
        }
public:
    TreeNode* increasingBST(TreeNode* root) {
       // vector<TreeNode*>v;
        TreeNode* a=new TreeNode();
        TreeNode* b=a;
        inorder(root,a);
        return b->right;
        //if(root==NULL) return NULL;
        // for(auto x: v){
        //     // cout<<x<<" ";
        //     a->right=x;
        // }
        // a->right=increasingBST(root->left);
        // a->right=increasingBST(root->right);
        // return a;
    }
};