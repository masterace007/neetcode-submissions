class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int,int> arr;
        for(int x: arr1){
            arr[x]++;
        }

        vector<int> ans;

        for(int i = 0; i < arr2.size(); ++i){
            if(arr.count(arr2[i])){
                for(int j = 0; j < arr[arr2[i]]; ++j)
                ans.push_back(arr2[i]);
                arr[arr2[i]] = 0;
            }
        }

        for(auto x: arr){
            if(x.second > 0){
                for(int i = 0; i < x.second; ++i)
                ans.push_back(x.first);
            }
        }

        return ans;
    }
};