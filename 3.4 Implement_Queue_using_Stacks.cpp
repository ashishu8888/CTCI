class MyQueue {
public:
    stack<int> a,b;
    int p = -1;
    MyQueue() {
        
    }
    
    void push(int x) {
        if(a.empty())
        {
            p = x;
        }
        a.push(x);
    }
    
    int pop() {
        int n = a.size();
        for(int i=0;i<n-1;i++)
        {
            b.push(a.top());
            a.pop();
        }
        int c = a.top();
        a.pop();
        
            if(!b.empty())
            {
                p = b.top();
            }
        
        
         for(int i=0;i<n-1;i++)
        {
            a.push(b.top());
            b.pop();
        }
        return c;
    }
    
    int peek() {
        return  p;
    }
    
    bool empty() {
        return a.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
