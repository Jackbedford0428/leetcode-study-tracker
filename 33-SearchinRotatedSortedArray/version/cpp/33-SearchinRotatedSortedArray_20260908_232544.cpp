// Last updated: 2026/9/8 下午11:25:44
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
17        stack<pair<TreeNode *, int>> stk;
18        stk.emplace(root, 1);
19        int max_depth = 1;
20        while (!stk.empty()) {
21            auto [curr, depth] = stk.top();
22            stk.pop();
23            max_depth = max(max_depth, depth);
24            if (curr->left != nullptr)
25                stk.emplace(curr->left, depth + 1);
26            if (curr->right != nullptr)
27                stk.emplace(curr->right, depth + 1);
28        }
29        return max_depth;
30    }
31};