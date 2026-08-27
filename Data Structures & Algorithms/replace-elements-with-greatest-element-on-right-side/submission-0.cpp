class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int> ans(arr.size(),-1);
        int num = arr.back();
        int n = arr.size();
        for(int i = n-2; i >= 0; --i){
            ans[i] = num;
            num = max(num,arr[i]);
        }
        return ans;
    }
};