// Last updated: 2026/9/11 下午7:13:19
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
14    vector<vector<int>> levelOrder(TreeNode* root) {
15        if (root == nullptr)
16            return {};
17        vector<vector<int>> trav;
18        queue<TreeNode *> q;
19        q.push(root);
20        int level = 0;
21        while (!q.empty()) {
22            trav.emplace_back();
23            int sz = static_cast<int>(q.size());
24            for (int i = 0; i < sz; ++i) {
25                TreeNode *cur = q.front();
26                q.pop();
27                if (cur->left != nullptr)
28                    q.push(cur->left);
29                if (cur->right != nullptr)
30                    q.push(cur->right);
31                trav[level].push_back(cur->val);
32            }
33            ++level;
34        }
35        return trav;
36    }
37};