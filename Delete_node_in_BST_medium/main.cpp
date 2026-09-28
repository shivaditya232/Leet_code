class Solution {
public:
    TreeNode* findLargestLeft(TreeNode* root){
        while(root->right){
            root=root->right;
        }
        return root;
    }
    TreeNode* deleting(TreeNode* root){
        if(!root->left){
            return root->right;
        }
        if(!root->right){
            return root->left;
        }
        TreeNode* left=root->left;
        TreeNode* largestLeft=findLargestLeft(left);
        largestLeft->right=root->right;
        return left;
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(!root) return nullptr;
        if(root->val==key){
            return deleting(root);
        }
        TreeNode* dummy=root;
        while(root){
            if(root->val>key){
                if(root->left && root->left->val==key){
                    root->left=deleting(root->left);
                    break;
                }
                else{
                    root=root->left;
                }
            }
            else{
                if(root->right && root->right->val==key){
                    root->right=deleting(root->right);
                    break;
                }
                else{
                    root=root->right;
                }
            }
        }
        return dummy;
    }
};