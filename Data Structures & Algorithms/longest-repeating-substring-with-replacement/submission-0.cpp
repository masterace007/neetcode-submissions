class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int> arr;
        int max_len = 0;
        int n = s.length();
        int l = 0, r = 0;
        int ans = 0;

        while(r < n){
            
            arr[s[r]]++;
            int max_value = 0;
            for(auto x: arr){
                max_value = max(max_value, x.second);
            }
            int num = r-l +1 - max_value;
            if(num > k){
                arr[s[l++]] -= 1;
            }
            max_len = max(max_len,r-l+1);
            r++;
            
        }


        return max_len;
    }
};
