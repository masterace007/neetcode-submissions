class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<double>> arr;
        for(int i = 0; i < points.size(); ++i){
            double temp = sqrt(points[i][0]*points[i][0] + points[i][1]*points[i][1]);
            double num = i;
            arr.push_back({temp,num});
        }

        sort(begin(arr),end(arr));
        vector<vector<int>> ans;

        for(int i = 0; i < k; ++i){
            ans.push_back(points[arr[i][1]]);
        }

        return ans;
    }
};
