class Solution {
public:
    bool validWordAbbreviation(string word, string abbr) {
        int idx_word = 0;
        if(word.size() < abbr.size())
        return 0;
        for(int i = 0; i < word.size();){
            if(word[i] == abbr[idx_word]){
                i++;
                idx_word++;
                continue;
            }

            if(isdigit(abbr[idx_word])) {
                int temp = 0;

                while(isdigit(abbr[idx_word])){
                    if(temp == 0 && abbr[idx_word] == '0')
                    return false;
                    temp = temp* 10 + (abbr[idx_word]-'0');
                    idx_word++;
                }
                
                if(temp == 0)
                return false;

                i = i + (temp);
                if(i > word.size())
                return false;
            }
            else
            return false;
        }
        if(idx_word < abbr.size())
        return false;

        return true;
    }
};