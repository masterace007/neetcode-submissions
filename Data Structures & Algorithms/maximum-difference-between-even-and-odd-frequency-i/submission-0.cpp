class Solution {
public:
    int maxDifference(string s) {
        map<char,int> arr;

        for(auto x: s){
            arr[x]++;
        }
        int min_even = INT_MAX, max_odd = INT_MIN;

        for(auto x: arr){
            if(x.second % 2 == 1)
            max_odd = max(max_odd,x.second);
            else 
            min_even = min(min_even,x.second);
        }
        
        return max_odd - min_even;
    }
};