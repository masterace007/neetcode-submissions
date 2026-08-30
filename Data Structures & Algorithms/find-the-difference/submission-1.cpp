class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(begin(s),end(s));
        sort(begin(t),end(t));
        for(int i = 0; i < t.length(); ++i){
            if(i == t.length()-1){
                return t[i];
            }
            else if(s[i] != t[i])
            return t[i];
        }

        return t.back();
    }
};