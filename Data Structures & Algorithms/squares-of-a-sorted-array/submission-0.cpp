class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans;

        for(auto x: nums){
            if(x < 0)
            ans.push_back(abs(x));
            else
            ans.push_back(x);
        }
        sort(begin(ans),end(ans));

        for(auto &x: ans){
            x = x*x;
        }

        return ans;
    }
};