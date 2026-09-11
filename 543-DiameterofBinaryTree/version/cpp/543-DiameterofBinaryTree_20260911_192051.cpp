// Last updated: 2026/9/11 下午7:20:51
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
14    vector<int> rightSideView(TreeNode* root) {
15        if (root == nullptr)
16            return {};
17        vector<int> view;
18        queue<TreeNode *> q;
19        q.push(root);
20        while (!q.empty()) {
21            int sz = static_cast<int>(q.size());
22            for (int i = 0; i < sz; ++i) {
23                TreeNode *cur = q.front();
24                q.pop();
25                if (i == 0)
26                    view.push_back(cur->val);
27                if (cur->right != nullptr)
28                    q.push(cur->right);
29                if (cur->left != nullptr)
30                    q.push(cur->left);
31            }
32        }
33        return view;
34    }
35};