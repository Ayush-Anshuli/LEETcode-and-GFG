/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode(int x) { val = x; }
 * }
 */

class Solution {
    TreeNode ans=null;
    public final TreeNode getTargetCopy(final TreeNode org, final TreeNode clo, final TreeNode tar) {
        
        if(org==null){
            return null;
        }
        if(org.val==tar.val){
            ans=clo;
        }
        getTargetCopy(org.left,clo.left,tar);
        getTargetCopy(org.right,clo.right,tar);
        return ans;
    }
}