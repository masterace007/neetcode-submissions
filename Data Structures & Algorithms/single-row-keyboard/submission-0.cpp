class Solution {
public:
    int calculateTime(string keyboard, string word) {
        unordered_map<char,int> arr;

        for(int i = 0; i < keyboard.size(); ++i){
            arr[keyboard[i]] = i;
        }
        int count = 0;
        int num = 0;
        for(int i = 0; i < word.size(); ++i){
            count += abs(arr[word[i]]-num);
            num = arr[word[i]];
        }

        return count;
    }
};
