class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        if(intervals.size() == 0){
            return {newInterval};
        }
        vector<vector<int>> ans;
        int start = newInterval[0];
        int end = newInterval[1];
        int n = intervals.size();
        bool flag = false;
        for(int i = 0; i < intervals.size(); ++i){
            if(intervals[i][0] > end || intervals[i][1] < start){
                if(!flag){
                    if(intervals[i][0] > end){
                        flag = true;
                        ans.push_back(newInterval);
                    }
                }
                ans.push_back(intervals[i]);
            }
            else{
                start = min(start,intervals[i][0]);
                end = max(end, intervals[i][1]);
                int j = i + 1;
                while(j < n && end >= intervals[j][0]){
                    end = max(end, intervals[j][1]);
                    j++;
                }
                ans.push_back({start,end});
                flag = true;
                i = j-1;
            }
            
        }
        if(!flag)
        ans.push_back(newInterval);

        return ans;
    }
};
