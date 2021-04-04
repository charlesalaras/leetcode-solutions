/*
Given the root of a binary tree, return its maximum depth.

A binary tree's maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.
*/

// Runtime: 4 ms
// Memory Usage: 19.1 MB

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
    int maxDepth(TreeNode* root) {
        // If Cannot Traverse Further
        if(root == nullptr) {
            return 0;
        }
        // If On Deepest Leaf
        if(root->left == nullptr && root->right == nullptr) {
            return 1;
        }
        int left = 0;
        int right = 0;
        // Checks Left Subtree
        if(root->left != nullptr) {
            left = 1 + maxDepth(root->left);
        }
        // Checks Right Subtree
        if(root->right != nullptr) {
            right = 1 + maxDepth(root->right);
        }
        // Return Greater of Two
        return max(left, right);
        
    }
};

/*


visit
do left
do right


do left
do right
visit


do left
visit
do right

*/
