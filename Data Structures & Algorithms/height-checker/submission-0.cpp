class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> arr = heights;
        sort(begin(arr),end(arr));

        int count = 0;

        for(int i = 0; i < arr.size(); ++i){
            if(heights[i] != arr[i])
            count++;
        }

        return count;
    }
};