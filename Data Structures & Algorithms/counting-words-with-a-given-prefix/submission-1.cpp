class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int count = 0;
        int n = pref.size();

        for(int i = 0; i < words.size(); ++i){
            int m = words[i].size();
            if(m >= n){
                string str = words[i].substr(0,n);
                if(str == pref)
                count++;
            }
        }
        return count;
    }
};