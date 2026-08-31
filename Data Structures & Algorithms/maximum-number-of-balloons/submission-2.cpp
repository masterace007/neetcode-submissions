class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int> arr;
        string required="balloon";

        for(auto x: text){
            if(required.find(x) != string::npos)
            arr[x]++;
        }
        int min_count = INT_MAX;
        if(arr.size() != 5)
        return 0;
        
        for(auto &x: arr){
            if(x.first == 'l' || x.first == 'o'){
                x.second /= 2;
            }
            min_count = min(min_count,arr[x.first]);
        }
        
        return min_count==INT_MAX ? 0 : min_count;
    }
};