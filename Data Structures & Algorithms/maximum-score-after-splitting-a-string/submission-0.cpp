class Solution {
public:
    int maxScore(string s) {
        int count1 = 0, count2 = 0;

        for(int i = 0; i < s.length(); ++i){
            if(s[i] == '1')
            count2++;
        }

        int ans = 0;

        for(int i = 0; i < s.length()-1; ++i){
            if(s[i] == '0'){
                count1++;
            }
            if(s[i] == '1'){
                count2--;
            }
            ans = max(ans, count2 + count1);
        }

        return ans;
    }
};