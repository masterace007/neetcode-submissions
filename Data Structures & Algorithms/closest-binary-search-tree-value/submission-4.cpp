/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    vector<double> ans{INT_MAX,INT_MAX};

    void closestVal(TreeNode *root, double target){
        if(root == nullptr)
        return;
        

        if(target == root->val){
            ans[1] = target;
            return;
        }
        double temp = (double) abs(target-root->val);
        if((double)temp < (double) ans[0]){
            ans[0] = temp;
            ans[1] = root->val;
        }
        else if(temp == ans[0]){
            if(root->val < ans[1])
            ans[1] = root->val;
        }
        

        if(target > root->val)
        closestVal(root->right,target);
        else if(target < root->val)
        closestVal(root->left,target);
        return;

    }

    int closestValue(TreeNode* root, double target) {
        
        closestVal(root,target);
        return ans[1];
    }
};
