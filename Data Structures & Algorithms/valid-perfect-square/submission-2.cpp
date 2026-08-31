class Solution {
public:
    bool isPerfectSquare(int num) {
        int n = num/2;
        if(num == 1)
        return true;

        int start = 1, end = n, target = num;

        while(start <= end){
            int mid = start + (end-start)/2;
            int temp_mid_ceil = ceil((double)num/mid);
            int temp_mid_floor = floor((double)num/mid);
            if(mid == temp_mid_ceil && temp_mid_ceil == temp_mid_floor)
            return true;
            if(temp_mid_floor < mid)
            end = mid -1;
            else
            start = mid + 1;
        }

        return false;
    }
};