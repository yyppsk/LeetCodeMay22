class MyStack {
public:
    MyStack() {
    }
    queue<int> stacker;
    void push(int x) {
        int size = stacker.size();
        stacker.push(x);
        for(int i = 0; i < size; i++){
            stacker.push(stacker.front());
            stacker.pop();
        }
    }
    
    int pop() {
        int top;
        if(!stacker.empty()){
            top = stacker.front();
            stacker.pop();
            return top;
        }
        return 0;
    }
    
    int top() {
        int top;
        if(!stacker.empty()){
            top = stacker.front();
            return top;
        }
        return 0;
    }
    
    bool empty() {
        return stacker.empty();
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