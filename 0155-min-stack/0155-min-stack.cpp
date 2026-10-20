class MinStack {
public:
    
    std::stack<long long> stk;
    long long mini;
public:
    MinStack() {
        mini=INT64_MAX;
    }

    void push(long long x) {
        if(stk.empty()){
            stk.push(x);
            mini=x;
        }
        else{
            if(x<mini){
                stk.push(2*x-mini);
                mini=x;
            }
            else stk.push(x);
        }
    }

    void pop() {
        if(stk.empty()) return;
        if(stk.top()<mini){
            mini=2*mini-stk.top();
            stk.pop();
        }
        else{
            stk.pop();
        }
    }

    int top() {
        if(stk.empty()) return 0;
        if(stk.top()<mini) return mini;
        else return stk.top();
    }

    int getMin() {
        //Write your code here...
        if(stk.empty()) return 0;
        return mini;
    }

};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */