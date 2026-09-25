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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> answer;
        if(!root){
            return answer;
        }
        queue<TreeNode*> q;
        q.push(root);
        bool reverse=false;
        while(!q.empty()){
            int size=q.size();
            vector<int> row(size);
            for(int i=0;i<size;i++){
                TreeNode* top=q.front();
                q.pop();
                if(reverse){
                    row[size-i-1]=top->val;
                }
                else{
                    row[i]=top->val;
                }
                if(top->left){
                    q.push(top->left);
                }
                if(top->right){
                    q.push(top->right);
                }
            }
            answer.push_back(row);
            if(reverse){
                reverse=false;
            }
            else{
                reverse=true;
            }
        }
        return answer;

    }
};