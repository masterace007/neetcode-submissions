class MinStack {
public:
    stack<int> num;
    stack<pair<int,int>> arr;
    MinStack() {
        
    }
    
    void push(int val) {
        num.push(val);
        if(arr.empty()){
            pair<int,int> temp;
            temp.first = val;
            temp.second = val;
            arr.push(temp);
        }
        else{
            pair<int,int> temp;
            temp.first = val;
            temp.second = min(val, arr.top().second);
            arr.push(temp);
        }
    }
    
    void pop() {
        num.pop();
        arr.pop();
    }
    
    int top() {
        return num.top();
    }
    
    int getMin() {
        return arr.top().second;
    }
};
