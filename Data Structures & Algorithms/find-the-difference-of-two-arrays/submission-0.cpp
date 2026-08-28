class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> arr, arr1;
        for(auto x: nums1)
        arr.insert(x);

        int n = nums1.size();
        int count1 = nums2.size();
        int temp = 0;
        vector<int> ans2;

        for(auto x: nums2){
            if(!arr.count(x)){
                ans2.push_back(x);
                arr.insert(x);
            }
            arr1.insert(x);
        }
        vector<int> ans1;

        for(auto x: nums1){
            if(!arr1.count(x)){
                ans1.push_back(x);
                arr1.insert(x);
            }
        }

        return {ans1,ans2};
        
        
    }
};