// Last updated: 2026/9/9 上午11:32:25
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
14    TreeNode* invertTree(TreeNode* root) {
15        if (root == nullptr)
16            return root;
17        stack<TreeNode *> stk;
18        stk.push(root);
19        while (!stk.empty())
20        {
21            TreeNode *cur = stk.top();
22            stk.pop();
23            if (cur->right != nullptr)
24                stk.push(cur->right);
25            if (cur->left != nullptr)
26                stk.push(cur->left);
27            TreeNode *tmp = cur->left;
28            cur->left = cur->right;
29            cur->right = tmp;
30        }
31        return root;
32    }
33};