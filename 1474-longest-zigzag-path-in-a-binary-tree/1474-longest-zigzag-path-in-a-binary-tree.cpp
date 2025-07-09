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
    int cnt,flag,ans=0;

    int longestZigZag(TreeNode* root) {
        if(!root) return ans;
        int l=lft(root->left);
        int r=rht(root->right);
        ans=max(max(l,r),ans);
        longestZigZag(root->left);
        longestZigZag(root->right);
        return ans;
    }

    int lft(TreeNode* node){
        cnt=1;
        flag=0;
        while(node!=nullptr){
            if(node->right) {
                cnt++;
                node=node->right;
            }
            else return cnt;
            if(node->left)cnt++;
            node=node->left;
            flag=1;
        }
        if(flag==1) return cnt;
        else return 0;
    }
    int rht(TreeNode* node){
        cnt=1;
        flag=0;
        while(node!=nullptr){
            if(node->left) {
               cnt++;
               node=node->left;
            }
            else return cnt;
            if(node->right)cnt++;
            node=node->right;
            flag=1;
        }
       if(flag==1) return cnt;
       else return 0;
       }

};