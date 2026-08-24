class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(begin(nums),end(nums));
        int n = nums.size();
        set<vector<int>> temp_ans;
        for(int i = 0; i < n-2; ++i){
            for(int j = i+1, k = n-1; j < k; ){
                if(nums[i] + nums[j] + nums[k] == 0){
                    temp_ans.insert({nums[i],nums[j],nums[k]});
                    j++;
                }
                else if(nums[i] + nums[j] + nums[k] > 0)
                k--;
                else
                j++;
            }
        }
        vector<vector<int>> ans;

        for(auto x: temp_ans)
        ans.push_back(x);

        return ans;
    }
};
