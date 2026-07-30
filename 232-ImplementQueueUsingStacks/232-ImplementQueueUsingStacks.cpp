// Last updated: 30/07/2026, 10:07:46
#include <stack>

class MyQueue {
private:
    std::stack<int> s1; // Primary stack (always holds elements in queue order)
    std::stack<int> s2; // Temporary helper stack

public:
    MyQueue() {
        // Constructor
    }
    
    // Push element x to the back of the queue
    void push(int x) {
        // Move all elements from s1 to s2
        while (!s1.empty()) {
            s2.push(s1.top());
            s1.pop();
        }
        
        // Push the new element to the bottom of s1
        s1.push(x);
        
        // Move everything back to s1
        while (!s2.empty()) {
            s1.push(s2.top());
            s2.pop();
        }
    }
    
    // Removes the element from the front of the queue and returns it
    int pop() {
        int frontElement = s1.top();
        s1.pop();
        return frontElement;
    }
    
    // Returns the element at the front of the queue
    int peek() {
        return s1.top();
    }
    
    // Returns true if the queue is empty, false otherwise
    bool empty() {
        return s1.empty();
    }
};