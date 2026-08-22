class Solution {
public:
    bool isValid(string s) {
        stack<char> arr;

        for(int i = 0; i < s.length(); ++i){
            if(s[i] == ')' || s[i] == '}' || s[i] == ']'){
                if(arr.empty())
                return false;
                char ch = arr.top();
                if(s[i] == ')'){
                    if(ch != '(')
                    return false;
                }
                else if(s[i] == '}'){
                    if(ch != '{')
                    return false;
                }
                else{
                    if(ch != '[')
                    return false;
                }
                arr.pop();
            }
            else
                arr.push(s[i]);
        }
        
        if(arr.empty())
        return true;
        return false;
    }
};
