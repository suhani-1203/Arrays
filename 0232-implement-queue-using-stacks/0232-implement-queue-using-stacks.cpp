class MyQueue {
    stack<int> st1;
    stack<int> st2;
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        while(st1.size()){
            st2.push(st1.top());
            st1.pop();
        }
        st1.push(x);
        while(st2.size()){
            st1.push(st2.top());
            st2.pop();
        }
    }
    
    int pop() {
        int el=st1.top();
        st1.pop();
        return el;
    }
    
    int peek() {
        return st1.top();
    }
    
    bool empty() {
        return(st1.size()==0);
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