class Solution {
public:
    bool isSubsequence(string s, string t) {
        int j = t.size()-1;
        int n = s.size()-1;
        
        for(int i = n; i >= 0; --i){
            bool flag = false;
            for(; j >= 0; --j){
                if(t[j] == s[i]){
                    flag = true;
                    j--;
                    break;
                }
            }
            if(!flag)
            return 0;
        }
        return 1;
    }
};