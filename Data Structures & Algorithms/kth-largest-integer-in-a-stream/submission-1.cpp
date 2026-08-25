class KthLargest {
public:
    priority_queue<int> num;
    int k;
    KthLargest(int k, vector<int>& nums) {
        for(auto x: nums)
        num.push(x);
        this->k = k;
    }
    
    int add(int val) {
        num.push(val);
        priority_queue<int> temp = num;
        int check = k-1;
        while(check--){
            temp.pop();
        }
        return temp.top();
    }
};
