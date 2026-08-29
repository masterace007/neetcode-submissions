class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_map<int,int> arr;

        for(auto x: nums){
            arr[x]++;
        }

        for(auto x: arr){
            if(x.second % 2 == 1)
            return false;
        }

        return true;
    }
};