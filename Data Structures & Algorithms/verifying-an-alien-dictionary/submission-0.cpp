class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
         map<char,char> arr;
        char ch = 'a';
        for(int i = 0; i < order.size(); ++i){
            arr[order[i]] = ch;
            ch++;
        }

        vector<string> temp1;

        for(int i = 0; i < words.size(); ++i){
            string temp = "";
            for(int j = 0; j < words[i].size(); ++j){
                temp += arr[words[i][j]];
            }
            temp1.push_back(temp);
        }

        vector<string> temp_ans = temp1;

        sort(begin(temp_ans),end(temp_ans));

        return temp_ans == temp1;
    }
};