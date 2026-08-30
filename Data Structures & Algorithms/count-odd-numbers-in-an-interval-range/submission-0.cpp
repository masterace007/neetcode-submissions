class Solution {
public:
    int countOdds(int low, int high) {
        int count = 0;
        int start = -1, end = -1;
        if(low == high){
            if(low % 2 == 1)
            return 1;
            return 0;
        }
        if(low % 2== 1)
        start = low;
        else
        start = low + 1;

        if(high % 2 == 1)
        end = high;
        else
        end = high -1;

        int n = (end-start)/2 + 1;
        return n;
    }
};