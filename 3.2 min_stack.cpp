class MinStack {
public:
    stack<int> st,pt;
    MinStack() {
        cout<<"Hello!"<<endl;
    }
    
    void push(int val) {
        
        if(st.empty())
        {
            st.push(val);
            pt.push(val);
        }
        else{
            st.push(val);
            if(pt.top()<val)
            {
                pt.push(pt.top());
            }
            else{
                pt.push(val);
            }
        }
        
    }
    
    void pop() {
        st.pop();
        pt.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return pt.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
