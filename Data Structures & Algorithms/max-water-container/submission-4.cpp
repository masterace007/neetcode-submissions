class Solution {
public:
    int maxArea(vector<int>& heights) {
        int max_vol = 0;
        for(int i = 0, j = heights.size()-1; i < j;){
            int vol = min(heights[i],heights[j]) * (j-i);
            max_vol = max(max_vol,vol);
            if(heights[i] < heights[j]){
                i++;
            }
            else
                j--;
        }

        return max_vol;
    }
};
