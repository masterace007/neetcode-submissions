class Solution {
public:
    bool canPermutePalindrome(string s) {
        unordered_map<char,int> arr;
        for(auto x: s)
        arr[x]++;
        bool flag = false;

        for(auto x: arr){
            if(x.second % 2 == 1){
                if(!flag){
                    flag = true;
                }
                else
                return false;
            }
        }
        return true;
    }
};
