class MyStack {
public:
    std::queue<int> q;
    MyStack() {
        
    }
    
    void push(int x) {
        //Write your code here...
        int n=q.size();
        q.push(x);
        for(int i=0;i<n;i++){
            q.push(q.front());
            q.pop();
        }
    }

    int pop() {
        //Write your code here... 
        if(q.empty()) return -1;
        int y=q.front();
        q.pop();
        return y;
    }

    int top() {
        //Write your code here...
        if(q.empty()) return -1;
        return q.front();
    }

    bool empty() {
        //Write your code here...
        if(q.empty()) return true;
        return false;
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