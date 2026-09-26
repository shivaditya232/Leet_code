/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(!root){
            return nullptr;
        }
        if(root->val==p->val){
            return p;
        }
        if(root->val==q->val){
            return q;
        }
        TreeNode* leftResult = lowestCommonAncestor(root->left, p, q);
        TreeNode* rightResult = lowestCommonAncestor(root->right, p, q);
        
        if(leftResult && rightResult){
            return root;
        }
        if(leftResult){
            return leftResult;
        }
        return rightResult;
        }
};