class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>> arr;

        int n = strs.size();
        for(int i = 0; i < n; ++i){
            string str = strs[i];
            sort(begin(str),end(str));
            arr[str].push_back(strs[i]);
        }
        vector<vector<string>> ans;
        for(auto x: arr){
            ans.push_back(x.second);
        }
        return ans;
    }
};
