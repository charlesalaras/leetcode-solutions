/*
Given the root of a binary tree, return the inorder traversal of its nodes' values.
*/

// Runtime: 0ms
// Memory Usage: 8.4 MB

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
    vector<int> solution;
    vector<int> inorderTraversal(TreeNode* root) {
        traverseNodes(root);
        return solution;
    }
    void traverseNodes(TreeNode* root) {
        if(root == nullptr) {
            return;
        }
        traverseNodes(root->left);
        solution.push_back(root->val);
        traverseNodes(root->right);
}
};
/*

*/