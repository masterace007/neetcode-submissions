class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int> mp;

        for(auto x: arr)
        mp[x]++;

        int max_num = -1;
        for(auto x: mp){
            if(x.first == x.second){
                max_num = max(max_num,x.first);
            }
        }

        return max_num;
    }
};