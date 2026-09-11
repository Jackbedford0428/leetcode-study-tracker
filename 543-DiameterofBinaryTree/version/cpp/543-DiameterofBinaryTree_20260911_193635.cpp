// Last updated: 2026/9/11 下午7:36:35
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
19        while (!stk.empty()) {
20            TreeNode *cur = stk.top();
21            stk.pop();
22            if (cur->right != nullptr)
23                stk.push(cur->right);
24            if (cur->left != nullptr)
25                stk.push(cur->left);
26            swap(cur->left, cur->right);
27        }
28        return root;
29    }
30};