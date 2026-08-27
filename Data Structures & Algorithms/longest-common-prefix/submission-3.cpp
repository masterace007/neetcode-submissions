class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string str = "";

        if(strs.size() == 1)
        return strs[0];

        for(int i = 1; i < strs.size(); ++i){
            if(str == ""){
                int m = min(strs[i].size(), strs[i-1].size());
                string temp = "";
                for(int j = 0; j < m; ++j){
                    if(strs[i][j] == strs[i-1][j]){
                        temp += strs[i][j];
                    }
                    else
                    break;
                }
                if(temp == "")
                return "";

                str = temp;
            }
            else{
                string temp = "";
                int m = min(strs[i].size(), str.length());
                for(int j = 0; j < m; ++j){
                    if(strs[i][j] == str[j]){
                        temp += strs[i][j];
                    }
                    else
                    break;
                }
                if(temp == "")
                return "";
                
                str = temp;
            }
        }

        return str;
    }
};