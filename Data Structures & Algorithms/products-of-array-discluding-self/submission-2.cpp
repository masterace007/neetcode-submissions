class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> arr1(n,1), arr2(n,1);
        for(int i = 1; i < n; ++i){
            arr1[i] = arr1[i-1] * nums[i-1];
        }

        for(int j = n-2; j >= 0; --j){
            arr2[j] = arr2[j+1] * nums[j+1];
        }

        vector<int> ans;

        for(int i = 0; i < n; ++i){
            ans.push_back(arr1[i]*arr2[i]);
        }
        return ans;
        
    }
};
