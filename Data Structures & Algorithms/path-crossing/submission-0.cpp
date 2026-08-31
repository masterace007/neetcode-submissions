class Solution {
public:
    bool isPathCrossing(string path) {
        int x = 0, y = 0;
        set<vector<int>> arr;
        arr.insert({0,0});
        for(int i = 0; i < path.size(); ++i){
            if(path[i] == 'N')
            y += 1;
            else if(path[i] == 'S')
            y -= 1;
            else if(path[i] == 'E')
            x += 1;
            else if(path[i] == 'W')
            x -= 1;

            if(arr.count({x,y}))
            return true;
            arr.insert({x,y});
        }

        return false;
    }
};