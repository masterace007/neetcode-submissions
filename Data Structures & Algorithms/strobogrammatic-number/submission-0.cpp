class Solution {
public:
    bool isStrobogrammatic(string num) {
        string rev;
        for(auto x: num){
            if(x == '9')
            rev += '6';
            else if(x == '6')
            rev += '9';
            else if(x == '8')
            rev += '8';
            else if(x == '1')
            rev += '1';
            else if(x == '0')
            rev += '0';
            else
            return 0;
        }

        reverse(begin(rev),end(rev));
        return rev == num;
    }
};
