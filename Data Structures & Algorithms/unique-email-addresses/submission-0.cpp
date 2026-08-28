class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string> arr;

        for(int i = 0; i < emails.size(); ++i){
            string str;

            string firstname = "";
            int num = 0;

            bool flag = true;

            for(int j = 0; j < emails[i].size(); ++j){
                if(emails[i][j] == '+'){
                    flag = false;
                }
                else if(emails[i][j] == '@'){
                    num = j;
                    break;
                }
                else if(flag && emails[i][j] != '.')
                firstname += emails[i][j];
                
            }

            str = firstname + emails[i].substr(num);
            arr.insert(str);
        }

        return arr.size();
    }
};