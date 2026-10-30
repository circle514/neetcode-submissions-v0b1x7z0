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
        if (root == nullptr) {
            return true;
        }
        
        int x = maxDepth(root->left);
        int y = maxDepth(root->right);

        return 1 + max(x, y);
    }

    bool isBalanced(TreeNode* root) {
        if (root == nullptr) {
            return true;
        }

        if (root->left == nullptr && root->right == nullptr) {
            return true;
        }

        int x = maxDepth(root->left);
        int y = maxDepth(root->right);

        if (x == y + 1 || x == y - 1 || x == y) {
            return isBalanced(root->left) && isBalanced(root->right);
        } else {
            return false;
        }
    }
};
