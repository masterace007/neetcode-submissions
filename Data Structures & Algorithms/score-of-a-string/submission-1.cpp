class Solution {
public:
    int scoreOfString(string s) {
        int temp = 0;
        for(int i = 1; i < s.length(); ++i){
            temp += abs(s[i] - s[i-1]);
        }

        return temp;
    }
};