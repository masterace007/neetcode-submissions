class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> ans(2,-1);

        bool flag1 = true, flag2 = true;
        sort(begin(nums),end(nums));

        for(int i = 0; i < nums.size(); ++i){
            if(i+1 < nums.size()){
                if(nums[i] == nums[i+1] && flag1){
                    flag1 = false;
                    ans[0] = nums[i];
                }
                if(flag2 && nums[i+1]-nums[i] == 2){
                    ans[1] = nums[i]+1;
                    flag2 = false;
                }
            }
        }

        if(flag2){
            if(nums.back() != nums.size())
            ans[1] = nums.size();
            else{
                ans[1] = 1;
            }
        }
        return ans;
    }
};