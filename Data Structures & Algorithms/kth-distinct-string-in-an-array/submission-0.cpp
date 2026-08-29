class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        map<string,int> mp;
        for(auto x: arr){
            mp[x]++;
        }
        unordered_set<string> arr1;

        for(auto x: mp){
            if(x.second == 1)
            arr1.insert(x.first);
        }

        if(arr1.size() < k)
        return "";

        for(auto x: arr){
            if(arr1.count(x) && k != 1){
                k--;
            }
            else if(arr1.count(x))
            return x;
        }
        return "";

    }
};