class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> ans;
        stack<int> temp;
        temp.push(nums2.back());
        for(int i = nums2.size()-2; i >= 0; --i){
            while(!temp.empty()){
                if(temp.top() <= nums2[i]){
                    temp.pop();
                }
                else{
                    if(!temp.empty()){
                        ans[nums2[i]] = temp.top();
                        break;
                    }
                }
            }
            temp.push(nums2[i]);
        }
        

        vector<int> ans1(nums1.size(), -1);
        
        for(int i = 0; i < nums1.size(); ++i){
            if(ans.count(nums1[i])){
                ans1[i] = ans[nums1[i]];
            }
        }

        return ans1;
          
    }
};