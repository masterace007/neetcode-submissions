class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        set<int> arr;
        for(auto x: nums){
            if(!arr.count(x)){
                arr.insert(x);
            }
            else{
                return x;
            }
        }
        return -1;
    }
};
