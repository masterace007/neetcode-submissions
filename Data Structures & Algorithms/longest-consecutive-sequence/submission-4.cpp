class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> arr;
        if(nums.size() == 0)
        return 0;
        
        for(int i = 0; i < nums.size(); ++i)
        arr.insert(nums[i]);

        vector<int> temp;

        for(auto x: arr)
        temp.push_back(x);

        int count = 1;
        int ans = 0;

        for(int i = 1; i < temp.size(); ++i){
            if(temp[i] - temp[i-1] == 1){
                count++;
            }
            else{
                ans = max(ans,count);
                count = 1;
            }
        }
        ans = max(ans,count);

        return ans;
    }
};
