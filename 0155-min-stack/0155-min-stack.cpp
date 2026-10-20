class MinStack {
public:
int mini = INT_MAX;
stack<pair<int,int>> st; 
    MinStack() {
      
    }
    
    void push(int value) {
       if(st.empty()){
        mini=value;
       st.push({value,mini});
       }
       else{
        if(value<mini){
            mini=value;
        }
        st.push({value,mini});
    }}
    
    void pop() {
        st.pop();
         if(!st.empty()) mini= st.top().second;
    }
    
    int top() {
        return st.top().first;
    }
    
    int getMin() {
        return st.top().second;
    }
};