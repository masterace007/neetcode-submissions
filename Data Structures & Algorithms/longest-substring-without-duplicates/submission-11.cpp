class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> arr;
        int max_len = 0;
        int idx = 0;
        int n = s.length();
        for(int i = 0; i < s.length(); ++i){
            if(!arr.count(s[i])){
                arr[s[i]] = i;
            }
            else{
                max_len = max(max_len, i - idx);
                idx = max(idx, arr[s[i]] + 1);
                arr[s[i]] = i;
            }
        }
        max_len = max(max_len, n - idx);

        return max_len;
    }
};
