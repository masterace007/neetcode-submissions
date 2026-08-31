class Solution {
public:
    string addBinary(string a, string b) {
        int carry = 0;
        string ans;
        int n = max(a.length(), b.length());
        int last = 0;
        int a_n = a.length(), b_n = b.length();

        reverse(begin(a),end(a));
        reverse(begin(b),end(b));

        for(int i = 0; i < n; ++i){
            last = i;
            int temp_a = 0;
            int temp_b = 0;

            if(i < a_n)
            temp_a = a[i]-'0';
            if(i < b_n)
            temp_b = b[i] - '0';

            int temp = temp_a + temp_b + carry;
            int dg = temp % 2;
            carry = temp / 2;
            char ch = (dg + '0');
            ans += ch;
        }

        if(carry != 0){
            ans += (carry + '0');
        }

        reverse(begin(ans),end(ans));

        return ans;
    }
};