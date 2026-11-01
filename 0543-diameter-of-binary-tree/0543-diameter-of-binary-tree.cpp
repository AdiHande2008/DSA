/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    int height(TreeNode* root, int& ans) {
        if (!root)
            return 0;
        int leftheight = height(root->left, ans);
        int rightheight = height(root->right, ans);
        ans = max(ans, leftheight + rightheight);
        return 1 + max(leftheight, rightheight);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if (!root)
            return 0;
        int ans = -1;
        height(root, ans);
        return ans;
    }
};