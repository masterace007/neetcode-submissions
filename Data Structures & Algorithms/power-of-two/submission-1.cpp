class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n == 1)
        return 1;
        else if(n == 0)
        return 0;

        while(n != 1){
            if(n % 2 != 0)
            return false;
            n /= 2;
        }

        return n < 2;
    }
};