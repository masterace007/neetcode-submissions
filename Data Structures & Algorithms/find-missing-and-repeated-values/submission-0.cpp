class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
       set<int> temp_ans;
        vector<int> ans;

        for(int i = 0; i < grid.size(); ++i){
            for(int j = 0; j < grid[0].size(); ++j){
                if(temp_ans.count(grid[i][j])){
                    ans.push_back(grid[i][j]);
                }
                temp_ans.insert(grid[i][j]);
            }
        }

        int n = grid.size();
        int num = 1;
        for(auto x: temp_ans){
            if(x != num){
                ans.push_back(num);
                return ans;
            }
            num++;
        }
        ans.push_back(num);
        return ans;
    }
};