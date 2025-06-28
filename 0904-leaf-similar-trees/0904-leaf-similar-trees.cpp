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
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> List_1,List_2;
        CollectLeaf_dfs(root1,List_1);
        CollectLeaf_dfs(root2,List_2);
        return List_1==List_2;
    }


    void CollectLeaf_dfs(TreeNode* node, vector<int> &nodeList){
        if(node==NULL)return;
        if(node->left==nullptr && node->right==nullptr){
            nodeList.push_back(node->val);
            return;
        }
        CollectLeaf_dfs(node->left,nodeList);
        CollectLeaf_dfs(node->right,nodeList);
    }
};