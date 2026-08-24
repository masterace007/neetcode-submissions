class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> arr;

        while(n != 1){
            string str = to_string(n);
            int sum = 0;
            cout<<"str "<<str<<endl;
            for(int i = 0; i < str.length(); ++i){
                sum += pow(str[i]-'0',2);
            }
            if(arr.count(sum))
            return false;
            
            arr.insert(sum);
            n = sum;
        }

        return true;
    }
};
