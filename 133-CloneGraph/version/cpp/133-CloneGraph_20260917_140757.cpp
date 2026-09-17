// Last updated: 2026/9/17 下午2:07:57
1/*
2// Definition for a Node.
3class Node {
4public:
5    int val;
6    vector<Node*> neighbors;
7    Node() {
8        val = 0;
9        neighbors = vector<Node*>();
10    }
11    Node(int _val) {
12        val = _val;
13        neighbors = vector<Node*>();
14    }
15    Node(int _val, vector<Node*> _neighbors) {
16        val = _val;
17        neighbors = _neighbors;
18    }
19};
20*/
21
22class Solution {
23public:
24    Node* cloneGraph(Node* node) {
25        unordered_map<Node *, Node *> clones;
26        return dfs(node, clones);
27    }
28
29private:
30    Node *dfs(Node *cur, unordered_map<Node *, Node *> &clones) {
31        if (cur == nullptr)
32            return cur;
33        
34        auto it = clones.find(cur);
35        if (it != clones.end())
36            return it->second;
37
38        clones[cur] = new Node(cur->val);
39        for (Node *nei : cur->neighbors) {
40            clones[cur]->neighbors.push_back(dfs(nei, clones));
41        }
42        return clones[cur];
43    }
44};