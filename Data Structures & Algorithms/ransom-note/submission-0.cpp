class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char,int> arr;
        for(auto x: magazine)
        arr[x]++;
        for(auto x: ransomNote){
            if(!arr.count(x) || arr[x] == 0)
            return false;
            arr[x]--;
        }
        return true;
    }
};