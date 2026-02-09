class MinStack {
public:
    vector<int>st;
    vector<int>lar;
    MinStack() {
        
    }
    
    void push(int val) {
        st.push_back(val);
        if(lar.empty()){
            lar.push_back(val);
        }
        else{
            if(lar.back()>val){
                lar.push_back(val);
            }
            else{
                lar.push_back(lar.back());
            }
        }
    }
    
    void pop() {
        st.pop_back();
        lar.pop_back();
    }
    
    int top() {
        return st.back();
    }
    
    int getMin() {
        return lar.back();
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