// Last updated: 2026/9/8 下午10:04:26
1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
8 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
9 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
10 * };
11 */
12class Solution {
13public:
14    int maxDepth(TreeNode* root) {
15        if (root == nullptr)
16            return 0;
17        if (root->left == nullptr && root->right == nullptr)
18            return 1;
19        int depth = max(maxDepth(root->left), maxDepth(root->right)) + 1;
20        return depth;
21    }
22};