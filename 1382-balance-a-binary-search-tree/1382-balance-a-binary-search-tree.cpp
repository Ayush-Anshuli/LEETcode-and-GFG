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
        void inorder(TreeNode* root,vector<int>&v){
            if(root==NULL){
                return;
            }
            inorder(root->left,v);
            v.push_back(root->val);
            inorder(root->right,v);
        }
        TreeNode* createbst(vector<int>&v,int i,int j){
            if(i>j){
                return NULL;
            }
            int mid=i+(j-i)/2;
            TreeNode * root=new TreeNode(v[mid]);
            root->left=createbst(v,i,mid-1);
            root->right=createbst(v,mid+1,j);
            return root;
        }
        
public:
    TreeNode* balanceBST(TreeNode* root) {
        vector<int>v;
        inorder(root,v);
        int i=0;
        int j=v.size()-1;
        return createbst(v,i,j);
    }
};