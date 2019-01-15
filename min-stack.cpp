class MinStack {
public:
    /** initialize your data structure here. */
    vector<int>s;
    vector<int>::iterator it;
    // int min=1234532;
    MinStack() {
        
    }
    
    void push(int x) {
        s.insert(s.begin(),x);
    }
    
    void pop() {
        if(s.size())
        s.erase(s.begin());
    }
    
    int top() {
        it=s.begin();
        if(s.size())
        return *it;
        else
            return -1;
    }
    
    int getMin() {
        int min=INT_MAX;
        for(auto u:s)
            if(u<min)
                min=u;
        return min;
        
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.push(x);
 * obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.getMin();
 */