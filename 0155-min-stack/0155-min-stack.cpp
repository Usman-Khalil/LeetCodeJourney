class MinStack {
    vector<int>s;
    vector<int>minStack;
public:
    MinStack() {
        minStack.push_back(INT_MAX);
    }
    
    void push(int val) {
        if(val < minStack[minStack.size() - 1])
            minStack.push_back(val);
        else
            minStack.push_back(minStack[minStack.size() - 1]);
        s.push_back(val);
    }
    
    void pop() { 
        s.pop_back();
        minStack.pop_back(); 
    }
    
    int top() {
        return s[s.size() - 1];
    }
    
    int getMin() {
        return minStack[minStack.size() - 1];
    }
};
