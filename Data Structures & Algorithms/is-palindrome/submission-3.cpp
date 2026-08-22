class Solution {
public:
    bool isPalindrome(string s) {
        string str = "";
        for(auto x: s){
            if(isdigit(x) || isalpha(x)){
                char ch = tolower(x);
                str += ch;
            }
        }
        

        string str1 = str;

        reverse(str1.begin(),str1.end());
        cout<<str1<<" "<<str<<endl;

        return str1 == str;
    }
};
