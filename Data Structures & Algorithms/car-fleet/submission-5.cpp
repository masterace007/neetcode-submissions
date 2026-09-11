class Solution {
public:
    bool static cmp(pair<int,int> a, pair<int,int> b){
        if(a.first == b.first)
        return a.second > b.second;
        return a.first > b.first;
    }

    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,int>> arr;
        int n = position.size();
        for(int i = 0; i < n; ++i){
            pair<int,int> temp;
            temp.first = position[i];
            temp.second = speed[i];
            arr.push_back(temp);
        }
        sort(begin(arr),end(arr),cmp);
        stack<double> st;
        for(int i = 0; i < n; ++i){
             double t = (double)(target - arr[i].first)/(double)arr[i].second;
            if(st.empty()){
                st.push(t);
            }
            else{
                if(st.top() < t)
                st.push(t);
            }
        }
        return st.size();
    }
};
