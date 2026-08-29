class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int> arr;
        for(auto x: nums){
            arr[x]++;
        }

        int temp = 0;

        for(auto x: arr){
            if(x.second > 1){
                int num = (x.second-1)*(x.second)/2;
                temp += num;
            }
        }

        return temp;
    }
};