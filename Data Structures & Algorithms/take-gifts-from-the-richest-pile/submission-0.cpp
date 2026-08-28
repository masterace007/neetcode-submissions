class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int> arr;
        for(auto x: gifts)
        arr.push(x);

        while(k--){
            int temp = arr.top();
            arr.pop();
            temp = sqrt(temp);
            arr.push(temp);
        }

        int count = 0;

        while(!arr.empty()){
            count += (arr.top());
            arr.pop();
        }

        return count;
    }
};