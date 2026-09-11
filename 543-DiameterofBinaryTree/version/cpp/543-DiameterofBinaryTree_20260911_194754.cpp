// Last updated: 2026/9/11 下午7:47:54
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
18        TreeNode *cur = root;
19        int depth = 1, max_depth = 0;
20        while (cur != nullptr || !stk.empty()) {
21            while (cur != nullptr) {
22                stk.emplace(cur, depth);
23                cur = cur->left;
24                ++depth;
25            }
26            auto [node, node_dph] = stk.top();
27            stk.pop();
28            max_depth = max(max_depth, node_dph);
29            cur = node->right;
30            depth = node_dph + 1;
31        }
32        return max_depth;
33    }
34};