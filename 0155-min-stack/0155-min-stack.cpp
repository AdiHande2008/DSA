class MinStack {
public:
    stack<int> min_x;
    stack<int> stk;
    MinStack() {
        //Write your code here...
    }

    void push(int x) {
        stk.push(x);
        if(min_x.empty()) min_x.push(x);
        else min_x.push(min(min_x.top(),x));
    }

    void pop() {
        if(stk.empty()) return;
        stk.pop();
        min_x.pop();
    }

    int top() {
        if(stk.empty()) return 0;
        return stk.top();
    }

    int getMin() {
        if(stk.empty()) return 0;
        return min_x.top();
    }
};