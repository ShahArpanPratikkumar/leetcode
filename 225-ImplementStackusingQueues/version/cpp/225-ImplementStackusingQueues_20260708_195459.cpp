// Last updated: 08/07/2026, 19:54:59
1#include <queue>
2
3class MyStack {
4private:
5    std::queue<int> q;
6
7public:
8    MyStack() {
9        // Constructor
10    }
11    
12    // Pushes element x to the top of the stack.
13    void push(int x) {
14        q.push(x);
15        int sz = q.size();
16        
17        // Rotate the queue to bring the new element to the front
18        for (int i = 0; i < sz - 1; i++) {
19            q.push(q.front());
20            q.pop();
21        }
22    }
23    
24    // Removes the element on the top of the stack and returns it.
25    int pop() {
26        int topElement = q.front();
27        q.pop();
28        return topElement;
29    }
30    
31    // Returns the element on the top of the stack.
32    int top() {
33        return q.front();
34    }
35    
36    // Returns true if the stack is empty, false otherwise.
37    bool empty() {
38        return q.empty();
39    }
40};
41
42/**
43 * Your MyStack object will be instantiated and called as such:
44 * MyStack* obj = new MyStack();
45 * obj->push(x);
46 * int param_2 = obj->pop();
47 * int param_3 = obj->top();
48 * bool param_4 = obj->empty();
49 */