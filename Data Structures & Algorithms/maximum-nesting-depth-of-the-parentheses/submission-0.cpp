class Solution {
public:
    int maxDepth(string s) {
        
        int count = 0;
        int temp = 0;
        for(auto x: s){
            if(x == '('){
                temp++;
            }
            else if(x == ')'){
                --temp;
            }

            count = max(count,temp);
        }
        return count;
    }
};