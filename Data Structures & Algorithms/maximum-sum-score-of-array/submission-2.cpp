class Solution {
public:
    long long maximumSumScore(vector<int>& nums) {
        
        vector<long long> arr1(nums.size(),0);
        vector<long long> arr2(nums.size(),0);

        for(int i = 0; i < nums.size(); ++i){
            if(i == 0){
                arr1[i] = nums[0];
            }
            else
                arr1[i] = arr1[i-1] + nums[i];
        }

        for(int i = nums.size()-1; i >= 0; --i){
            if(i == nums.size()-1){
                arr2[i] = nums[i];
            }
            else{
                arr2[i] = arr2[i+1] + nums[i];
            }
        }
        long long local_max = 0;
        long long max_max = 0;

        for(int i = 0; i < nums.size(); ++i){
            local_max = max(arr1[i],arr2[i]);
            if(i == 0){
                max_max = local_max;
            }
            else{
                max_max = max(max_max,local_max);
            }
        }

        return max_max;
    }
};
