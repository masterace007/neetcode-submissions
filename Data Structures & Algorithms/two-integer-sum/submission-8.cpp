class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<vector<int>> arr;
        int n = nums.size();
        for(int i = 0; i < n; ++i){
            arr.push_back({nums[i], i});
        }
        vector<int> ans;
        sort(arr.begin(),arr.end());
        for(int i = 0, j = nums.size()-1; i < j;){
            if(arr[i][0] + arr[j][0] == target){
                ans.push_back(arr[i][1]);
                ans.push_back(arr[j][1]);
                break;
            }
            else if(arr[i][0] + arr[j][0] < target)
            i++;
            else
            j--;
        }
        if(ans.size() == 0)
        {
            ans.push_back(-1);
            ans.push_back(-1);
        }
        sort(begin(ans),end(ans));
        return ans;
    }
};
