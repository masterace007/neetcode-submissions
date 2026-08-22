class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> arr;

        for(int i = 0; i < tokens.size(); ++i){
            if(tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "/"
            || tokens[i] == "*" ){
                int temp1 = arr.top();
                arr.pop();
                int temp2 = arr.top();
                arr.pop();
                int sum = 0;
                if(tokens[i] == "+")
                sum = temp1+ temp2;
                else if(tokens[i] == "-")
                sum = temp2 - temp1;
                else if(tokens[i] == "/")
                sum = temp2 / temp1;
                else if(tokens[i] == "*")
                sum = temp1 * temp2;
                arr.push(sum);
            }
            else{
                int num = 0;
                int temp = 0;
                if(tokens[i][0] == '-')
                num++;

                for(int j = num; j < tokens[i].size(); ++j){
                    temp = temp*10 + (tokens[i][j] - '0');
                }
                if(num > 0)
                temp *= -1;
                arr.push(temp);
            }
        }

        return arr.top();
    }
};
