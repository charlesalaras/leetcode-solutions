/*
Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.

Implement the MinStack class:

    MinStack() initializes the stack object.
    void push(val) pushes the element val onto the stack.
    void pop() removes the element on the top of the stack.
    int top() gets the top element of the stack.
    int getMin() retrieves the minimum element in the stack.
*/

// Runtime: 20 ms
// Memory Usage: 15.9 MB

class MinStack {
public:
    /** initialize your data structure here. */
    int min = 0;
    vector<int> thestack;
    MinStack() {
        
    }
    
    void push(int x) {
        if(thestack.empty()) {
            thestack.push_back(x);
            min = x;
            return;
        }
        thestack.push_back(x);
        if(x < min) {
            min = x;
        }
    }
    
    void pop() {
        thestack.pop_back();
        if(thestack.empty()) {
            return;
        }
        min = thestack.at(0);
        for(int i = 0; i < thestack.size(); i++) {
            if(thestack.at(i) < min) {
                min = thestack.at(i);
            }
        }
    }
    
    int top() {
        return thestack.at(thestack.size() - 1);
    }
    
    int getMin() {
        return min;
    }
};
