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
    int ans=0;
    int pathSum(TreeNode* root, int targetSum) {
        if(root){
        pathSum_withroot(root,targetSum);
        pathSum(root->left,targetSum);
        pathSum(root->right,targetSum);
        }
        return ans;
    }

    void pathSum_withroot(TreeNode* root, long long targetSum){
        if (!root)  return;
        if(root->val==targetSum)ans++;
        pathSum_withroot(root->left,targetSum-root->val);
        pathSum_withroot(root->right,targetSum-root->val);
    }
};