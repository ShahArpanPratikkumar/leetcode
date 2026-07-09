// Last updated: 09/07/2026, 21:26:20
1#include <stack>
2
3class MyQueue {
4private:
5    std::stack<int> s1; // Primary stack (always holds elements in queue order)
6    std::stack<int> s2; // Temporary helper stack
7
8public:
9    MyQueue() {
10        // Constructor
11    }
12    
13    // Push element x to the back of the queue
14    void push(int x) {
15        // Move all elements from s1 to s2
16        while (!s1.empty()) {
17            s2.push(s1.top());
18            s1.pop();
19        }
20        
21        // Push the new element to the bottom of s1
22        s1.push(x);
23        
24        // Move everything back to s1
25        while (!s2.empty()) {
26            s1.push(s2.top());
27            s2.pop();
28        }
29    }
30    
31    // Removes the element from the front of the queue and returns it
32    int pop() {
33        int frontElement = s1.top();
34        s1.pop();
35        return frontElement;
36    }
37    
38    // Returns the element at the front of the queue
39    int peek() {
40        return s1.top();
41    }
42    
43    // Returns true if the queue is empty, false otherwise
44    bool empty() {
45        return s1.empty();
46    }
47};