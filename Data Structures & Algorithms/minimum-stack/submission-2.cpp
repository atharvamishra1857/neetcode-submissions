class MinStack {
    stack<int> stk;
        stack<int> minStk;
public:
    MinStack() {
      
    }
    
    void push(int val) {
        stk.push(val);

        if  (minStk.empty()) minStk.push(val);
        else minStk.push(min(val, minStk.top()));
    }
    
    void pop() {
        stk.pop();
     minStk.pop();
    }
    
    int top() {
        if(!stk.empty()){
           return stk.top();
        }
        
    }
    
    int getMin() {
        return minStk.top();
    }
};
