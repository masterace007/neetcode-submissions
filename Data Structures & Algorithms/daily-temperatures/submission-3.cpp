class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> ans(n,0);
        stack<int> arr;
        arr.push(n-1);
        for(int i = n-2; i >= 0; --i){
            while(!arr.empty() && temperatures[arr.top()] <= temperatures[i]){
                arr.pop();
            }
            if(!arr.empty()){
                ans[i] = arr.top() - i;
            }
            arr.push(i);
        }

        return ans;
    }
};
