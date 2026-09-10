// Last updated: 2026/9/11 上午12:00:52
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
14    int diameterOfBinaryTree(TreeNode* root) {
15        if (root == nullptr)
16            return 0;
17        int diameter = maxDepth(root->left)+maxDepth(root->right);
18        int max_d = max(diameterOfBinaryTree(root->left), diameterOfBinaryTree(root->right));
19        return max(max_d, diameter);
20    }
21
22private:
23    int maxDepth(TreeNode *root) {
24        if (root == nullptr)
25            return 0;
26        return max(maxDepth(root->left), maxDepth(root->right)) + 1;
27    }
28};