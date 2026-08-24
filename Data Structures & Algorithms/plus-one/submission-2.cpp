class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> ans;

        int n = digits.size();
        int carry = 0;

        for(int i = n-1; i >= 0; --i){
            int sum = digits[i] + carry; 
            if(i == n-1)
            sum += 1;
            int dg = sum % 10;
            carry = sum / 10;
            ans.push_back(dg);
        }
        if(carry != 0)
        ans.push_back(carry);

        reverse(begin(ans),end(ans));

        return ans;
    }
};
