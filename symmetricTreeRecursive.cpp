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
//https://leetcode.com/problems/symmetric-tree/
class Solution {
    bool help(TreeNode* t1, TreeNode* t2){
        if(t1==NULL && t2==NULL) return true;
        if(t1==NULL || t2==NULL) return false;
        return (t1->val==t2->val) && help(t1->left,t2->right) && help(t1->right,t2->left);
    }
public:
    bool isSymmetric(TreeNode* root) {
        if(root == NULL) return true;
        return help(root->left,root->right);
    }
};