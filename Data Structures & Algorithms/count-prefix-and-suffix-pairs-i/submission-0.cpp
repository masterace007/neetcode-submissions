class Solution {
public:
    bool isPrefixAndSuffix(string a, string b){
        int n = a.length();
        string st1 = b.substr(0, n);
        string st2 = b.substr(b.length()-n);
        return st1 == st2 && st1 == a;
    }

    int countPrefixSuffixPairs(vector<string>& words) {
        int count = 0;

        for(int i = 0; i < words.size()-1; ++i){
            for(int j = i+1; j < words.size(); ++j){
                if(words[i].length() <= words[j].length() && isPrefixAndSuffix(words[i],words[j]))
                count++;
            }
        }
        return count;
    }
};