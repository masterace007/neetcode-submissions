class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(begin(intervals),end(intervals));
        int start = intervals[0][0];
        int end = intervals[0][1];
        int n = intervals.size();
        vector<vector<int>> ans;
        for(int i = 1; i < intervals.size(); ){
            if(end >= intervals[i][0]){
                while(i < n && end >= intervals[i][0]){
                    end = max(end,intervals[i][1]);
                    i++;
                }
                ans.push_back({start,end});
                if(n > i){
                start = intervals[i][0];
                end = intervals[i][1];
                }
                else
                return ans;
                i++;
            }
            else{
                ans.push_back({start,end});
                if(n > i){
                start = intervals[i][0];
                end = intervals[i][1];
                }
                else
                return ans;
                i++;
            }
        }
        ans.push_back({start,end});

        return ans;
    }
};
