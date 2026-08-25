class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> arr;

        for(auto x: stones)
        arr.push(x);

        while(arr.size() > 1){
            int temp1 = arr.top();
            arr.pop();
            int temp2 = arr.top();
            arr.pop();

            int num = abs(temp1-temp2);
            arr.push(num);
        }


        return arr.top();
    }
};
