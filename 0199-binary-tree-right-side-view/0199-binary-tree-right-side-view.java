/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public void sol(TreeNode root,ArrayList<Integer> ans,int level){
        if(root==null){
            return;
        }
        if(level==ans.size()){
         ans.add(root.val);   
        }
        sol(root.right,ans,level+1);
        sol(root.left,ans,level+1);
    }
    public List<Integer> rightSideView(TreeNode root) {
        ArrayList<Integer> ans=new ArrayList<>();
        sol(root,ans,0);
        return ans;
    }
}