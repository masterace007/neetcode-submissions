class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> arr;
        string temp = "";
        for(int i = 0; i < s.length(); ++i){
            if(s[i] == ' '){
                if(temp.size() > 0)
                arr.push_back(temp);
                temp = "";
            }
            else{
                temp += s[i];
            }
        }
        if(temp.size() > 0)
        arr.push_back(temp);

        if(pattern.size() > arr.size() || pattern.size() < arr.size())
        return 0;

        unordered_map<char,string> mp;
        unordered_map<string,char> mp1;

        for(int i = 0; i < arr.size(); ++i){
            if(!mp.count(pattern[i]) && !mp1.count(arr[i])){
                mp[pattern[i]] = arr[i];
                mp1[arr[i]] = pattern[i];
            }
            else{
                if(mp[pattern[i]] != arr[i] || mp1[arr[i]] != pattern[i])
                return false;
            }
        }

        return true;

    }
};