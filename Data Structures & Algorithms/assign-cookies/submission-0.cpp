class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(begin(g),end(g));
        sort(begin(s),end(s));
        int count = 0;
        int num = 0;
        for(int i = 0; i < g.size(); ++i){
            for(int j = num; j < s.size(); ++j){
                if(s[j] >= g[i]){
                    count++;
                    num = j+1;
                    break;
                }
                num = j;
            }
        }

        return count;
    }
};