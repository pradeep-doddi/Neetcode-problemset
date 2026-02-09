class MinStack {
public:
        vector<int>st;
        int currmin = INT_MAX;
    MinStack() {

    }
    
    void push(int val) {
        st.push_back(val);
        if(val<currmin) currmin = val;
    }
    
    void pop() {
        st.pop_back();
        currmin=INT_MAX;
        for(auto i:st){
            if (i<currmin) currmin=i;
        }
    }
    
    int top() {
        return st.back();
        
    }
    
    int getMin() {
        return currmin;
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