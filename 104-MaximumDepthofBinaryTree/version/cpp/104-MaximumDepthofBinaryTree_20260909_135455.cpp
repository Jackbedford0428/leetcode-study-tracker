// Last updated: 2026/9/9 下午1:54:55
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
17        queue<TreeNode *> q;
18        q.push(root);
19        while (!q.empty())
20        {
21            TreeNode *cur = q.front();
22            q.pop();
23            if (cur->left != nullptr)
24                q.push(cur->left);
25            if (cur->right != nullptr)
26                q.push(cur->right);
27            swap(cur->left, cur->right);
28        }
29        return root;
30    }
31};