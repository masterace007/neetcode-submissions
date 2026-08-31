class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> arr;

        for(auto x: nums1)
        arr.insert(x);

        unordered_set<int> ans;
        for(auto x: nums2){
            if(arr.count(x))
            ans.insert(x);
        }

        vector<int> ans_v(begin(ans),end(ans));
        return ans_v;
    }
};