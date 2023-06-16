class MaxStack {
public:
stack<int> st;
map<int,int> mp;
priority_queue<int> pq;
    MaxStack() {
        // do intialization if necessary
    }
    
    /*
     * @param number: An integer
     * @return: nothing
     */
    void push(int number) {
        // write your code here
        st.push(number);
        mp[number]++;
        pq.push(number);
       // cout<<"push "<<number<<endl;
    }
    /*
     * @return: An integer
     */
    int pop() {
        // write your code here
        
        while(mp[st.top()] == 0)
        {
            st.pop();
        }
        int x = st.top();
        mp[x]--;
        if(pq.top() == x)
        {
            pq.pop();
        }
        st.pop();
       //  cout<<"pop "<<x<<endl;
        return x;
    }

    /*
     * @return: An integer
     */
    int top() {
        // write your code here
        while(mp[st.top()] == 0)
        {
            st.pop();
        }
       //  cout<<"top "<<st.top()<<endl;
        return st.top();
    }
    
    /*
     * @return: An integer
     */
    int peekMax() {
        // write your code here
        // cout<<"peek max "<<pq.top()<<endl;
        while(mp[pq.top()] == 0)
        {
            pq.pop();
        }
        return pq.top();
    }
    
    /*
     * @return: An integer
     */
    int popMax() {
        // write your code here
        while(mp[pq.top()] == 0)
        {
            pq.pop();
        }
        int x = pq.top();
        mp[x]--;
        if(st.top() == x)
        {
            //cout<<"yes "<<st.top()<<endl;
            st.pop();
            //cout<<"yes "<<st.top()<<endl;
        }
        pq.pop();
        // cout<<"pop max "<<x<<endl;
        return x;
    }
};
