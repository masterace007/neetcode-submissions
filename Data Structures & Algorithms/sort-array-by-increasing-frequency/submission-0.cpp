class Solution {
public:
    bool static cmp(vector<int> a, vector<int> b){
        if(a[0] == b[0])
        return a[1] > b[1];
        return a[0] < b[0];
    }

    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int> arr;
        for(int i = 0; i < nums.size(); ++i){
            arr[nums[i]]++;
        }
        vector<vector<int>> temp_ans;

        for(auto x: arr){
            temp_ans.push_back({x.second,x.first});
        }

        sort(begin(temp_ans),end(temp_ans),cmp);

        vector<int> ans;
        for(int i = 0; i < temp_ans.size(); ++i){
            for(int j = 0; j < temp_ans[i][0]; ++j){
                ans.push_back(temp_ans[i][1]);
            }
        }

        return ans;
    }
};