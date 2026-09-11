// Last updated: 2026/9/11 下午3:53:19
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
15        int diameter = 0;
16        maxDepthWithDia(root, diameter);
17        return diameter;
18    }
19
20private:
21    int maxDepthWithDia(TreeNode *root, int &diameter) {
22        if (root == nullptr)
23            return 0;
24        int ldph = maxDepthWithDia(root->left, diameter);
25        int rdph = maxDepthWithDia(root->right, diameter);
26        diameter = max(diameter, ldph + rdph);
27        return max(ldph, rdph) + 1;
28    }
29};