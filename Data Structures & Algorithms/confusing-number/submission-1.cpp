class Solution {
public:
    bool confusingNumber(int n) {
        string str = to_string(n);
        int len = str.length();
        string st = "";
        for(int i = 0; i < len; ++i){
            if(str[i] == '2' || str[i] == '3' || str[i] == '4' || 
            str[i] == '5' || str[i] == '7'){
                return 0;
            }
            char ch = str[i];
            if(str[i] == '6' || str[i] == '9'){
                if(str[i] == '6')
                ch = '9';
                else
                ch = '6';
            }
            st += ch;
        }
        reverse(begin(st),end(st));
        return st != str;
    }
};
