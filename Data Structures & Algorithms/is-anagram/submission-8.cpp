class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> arr1,arr2;
        for(auto x: s){
            arr1[x]++;
        }
        for(auto x: t){
            arr2[x]++;
        }

        if(arr1.size() != arr2.size())
        return 0;

        for(auto x: arr1){
            if(arr2[x.first] != x.second)
            return 0;
        }

        for(auto x: arr2){
            if(arr1[x.first] != x.second)
            return 0;
        }
        return 1;
    }
};
