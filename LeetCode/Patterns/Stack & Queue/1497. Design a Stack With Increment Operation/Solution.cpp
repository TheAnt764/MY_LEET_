class CustomStack {
public:
    vector<int> stk;
    int size;
    CustomStack(int maxSize) {
        this->size = maxSize;
    }
    
    void push(int x) {
        if(stk.size()>=size){
            return;
        }
        stk.push_back(x);
    }
    
    int pop() {
        if(stk.size()==0)return -1;
        int a = stk[stk.size()-1];
        stk.pop_back();
        return a;
    }
    
    void increment(int k, int val) {
        if(stk.size()==0)return;
        int i=0;
        while(k-->0){
            if(i>=stk.size())break;
            stk[i]+=val;
            i++;
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */