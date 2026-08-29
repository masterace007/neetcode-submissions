class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_set<char> arr;

        for(auto x: allowed)
        arr.insert(x);

        int count = 0;

        for(auto x: words){
            bool flag = true;
            for(auto y: x){
                if(!arr.count(y)){
                    flag = false;
                    break;
                }
            }
            if(flag)
            count++;
        }

        return count;
    }
};