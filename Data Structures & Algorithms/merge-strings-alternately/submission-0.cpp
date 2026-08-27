class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int m = min(word1.size(), word2.size());

        string str;
        for(int i = 0; i < m; ++i){
            str = str + word1[i] + word2[i];
        }

        if(word1.size() > m){
            str = str + word1.substr(m);
        }
        else if(word2.size() > m){
            str = str + word2.substr(m);
        }

        return str;
    }
};