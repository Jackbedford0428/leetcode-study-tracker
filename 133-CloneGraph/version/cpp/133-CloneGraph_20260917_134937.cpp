// Last updated: 2026/9/17 下午1:49:37
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
25        if (node == nullptr)
26            return node;
27
28        unordered_map<Node *, Node *> clones;
29        stack<Node *> stk;
30        clones[node] = new Node(node->val);
31        stk.push(node);
32        while (!stk.empty()) {
33            Node *cur = stk.top();
34            stk.pop();
35            for (Node *nei : cur->neighbors) {
36                if (!clones.contains(nei)) {
37                    clones[nei] = new Node(nei->val);
38                    stk.push(nei);
39                }
40                clones[cur]->neighbors.push_back(clones[nei]);
41            }
42        }
43        return clones[node];
44    }
45};