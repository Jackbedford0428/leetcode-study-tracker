// Last updated: 2026/8/31 下午9:35:28
1class MinStack {
2public:
3    stack<pair<int, int>> s;
4
5    MinStack() {
6        
7    }
8    
9    void push(int value) {
10        if (s.empty()) {
11            s.emplace(value, value);
12        } else {
13            // 1. 參數計算優先：函數呼叫前，括號內的所有參數必須先完成求值計算
14            // 2. 求值順序未定：參數之間的計算先後順序在 C++ 標準中並未定義，應避免讓參數在計算時互相依賴或修改同一個容器的狀態
15            s.emplace(value, min(s.top().second, value));
16        }
17    }
18    
19    void pop() {
20        s.pop();
21    }
22    
23    int top() {
24        return s.top().first;
25    }
26    
27    int getMin() {
28        return s.top().second;
29    }
30};
31
32/**
33 * Your MinStack object will be instantiated and called as such:
34 * MinStack* obj = new MinStack();
35 * obj->push(value);
36 * obj->pop();
37 * int param_3 = obj->top();
38 * int param_4 = obj->getMin();
39 */