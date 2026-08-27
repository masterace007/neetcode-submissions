class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> arr;

        for(int i = 0; i < operations.size(); ++i){
            if(operations[i] != "C" && operations[i] != "D" &&
            operations[i] != "+"){
                int temp = 0;
                int count = 0;
                bool flag = false;
                if(!flag && operations[i][0] == '-'){
                    count++;
                    flag = true;
                }
                for(int j = count; j < operations[i].length(); ++j){
                    temp = temp*10 + (operations[i][j] - '0');
                }
                if(flag)
                temp *= -1;
                
                arr.push(temp);
            }
            else{
                if(operations[i] == "C"){
                    arr.pop();
                }
                else if(operations[i] == "D"){
                    int temp = arr.top();
                    temp *= 2;
                    arr.push(temp);
                }
                else{
                    int num1 = arr.top();
                    arr.pop();
                    int num2 = arr.top();
                    arr.pop();
                    int sum = num1+num2;
                    arr.push(num2);
                    arr.push(num1);
                    arr.push(sum);
                }
            }
        }

        int ans = 0;

        while(!arr.empty()){
            int temp = arr.top();
            arr.pop();
            ans += temp;
        }

        return ans;
    }
};