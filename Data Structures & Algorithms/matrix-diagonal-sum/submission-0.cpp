class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size()-1;
        int sum = 0;
        int count = 0;
        
        for(int i = 0; i < mat.size(); ++i){
            if(i == n - i)
            sum += mat[i][i];
            else{
                sum += mat[i][i];
                sum += mat[i][n-i];
            }
        }
        return sum;
    }
};