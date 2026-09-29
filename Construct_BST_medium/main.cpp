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
public:
    TreeNode* buildTree(vector<int>& preorder,int& pointer,int bound){
        if(pointer==preorder.size() || preorder[pointer]>bound){
            return nullptr;
        }
        TreeNode* root=new TreeNode(preorder[pointer]);
        pointer++;
        root->left=buildTree(preorder,pointer,root->val);
        root->right=buildTree(preorder,pointer,bound);
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int i=0;
        return buildTree(preorder,i,INT_MAX);
    }
};