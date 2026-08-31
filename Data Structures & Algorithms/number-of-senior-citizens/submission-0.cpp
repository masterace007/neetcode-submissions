class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count = 0;

        for(auto x: details){
            int num = -1;
            if(x.find("M") != string::npos)
            num = x.find("M");
            else if(x.find("F") != string::npos){
                num = x.find("F");
            }
            else{
                num = x.find("O");
            }
            int age = (x[num+1]-'0') * 10 + (x[num+2]-'0');

            if(age > 60)
            count++;
        }
        return count;
    }
};