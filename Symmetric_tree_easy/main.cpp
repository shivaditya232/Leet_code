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
    bool check(TreeNode* left,TreeNode* right,int& seenFalse){
        if(seenFalse==1){
            return false;
        }
        if(!left && !right){
            return true;
        }
        if(!left){
            seenFalse=1;
            return false;
        }
        if(!right){
            seenFalse=1;
            return false;
        }
        if(left->val!=right->val){
            seenFalse=1;
            return false;
        }
        check(left->left,right->right,seenFalse);
        check(left->right,right->left,seenFalse);
        if(seenFalse==1){
            return false;
        }
        return true;
    }
    bool isSymmetric(TreeNode* root) {
       TreeNode* leftPart=root->left;
       TreeNode* rightPart=root->right;
       int seenFalse=0;
        if(check(leftPart,rightPart,seenFalse)){
            return true;
        }
        return false;
    }
};