class MinStack {
private:
    stack<int> stk;
    stack<int> mStk;
public:
    MinStack() {

    }
    
    void push(int val) {
        stk.push(val);
        if (mStk.empty() || val <= mStk.top()) {
            mStk.push(val);
        }
    }
    
    void pop() {
        if (stk.top() == mStk.top()) {
            mStk.pop();
        }
        stk.pop();
    }
    
    int top() {
        return stk.top();
    }
    
    int getMin() {
        return mStk.top();
    }
};
