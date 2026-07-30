// Last updated: 30/07/2026, 10:07:52
#include <queue>

class MyStack {
private:
    std::queue<int> q;

public:
    MyStack() {
        // Constructor
    }
    
    // Pushes element x to the top of the stack.
    void push(int x) {
        q.push(x);
        int sz = q.size();
        
        // Rotate the queue to bring the new element to the front
        for (int i = 0; i < sz - 1; i++) {
            q.push(q.front());
            q.pop();
        }
    }
    
    // Removes the element on the top of the stack and returns it.
    int pop() {
        int topElement = q.front();
        q.pop();
        return topElement;
    }
    
    // Returns the element on the top of the stack.
    int top() {
        return q.front();
    }
    
    // Returns true if the stack is empty, false otherwise.
    bool empty() {
        return q.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */