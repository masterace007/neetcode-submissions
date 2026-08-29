class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count = 0;
        if(flowerbed.size()== 1){
            if(flowerbed[0] == 0)
            return 1 >= n;
            return 0 >= n;
        }
        for(int i = 0; i < flowerbed.size(); ++i){
            if(i == 0){
                if(flowerbed[i] == 0 && flowerbed[i+1] == 0){
                flowerbed[i] = 1;
                count++;
                }
            }
            else if( i == flowerbed.size()-1){
                if(flowerbed[i] == 0 && flowerbed[i-1] == 0 )
                count++;
                break;
            }
            else if(i > 0 && flowerbed[i] == 0 && flowerbed[i+1] == 0 && flowerbed[i-1] == 0){
                count++;
                flowerbed[i] = 1;
            }
        }

        return count >= n;
    }
};