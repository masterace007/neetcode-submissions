class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> arr;

        for(int x: nums)
        arr[x]++;

        vector<pair<int,int>> temp;

        for(auto x: arr){
            temp.push_back(make_pair(x.second,x.first));
        }

        sort(begin(temp),end(temp),greater<>());

        vector<int> ans(k,0);
        int counter = 0;
        for(auto x: temp){
            if(k == counter)
            break;

            ans[counter++] = (x.second);
        }

        return ans;

    }
};
