class Solution {
public:
    vector<int> anagramMappings(vector<int>& nums1, vector<int>& nums2) {
        map<int,int> arr;

        for(int i = 0; i < nums2.size(); ++i){
            arr[nums2[i]] = i;
        }

        vector<int> ans;

        for(int i = 0; i < nums1.size(); ++i){
            ans.push_back(arr[nums1[i]]);
        }

        return ans;


    }
};
