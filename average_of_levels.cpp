// https://leetcode.com/problems/average-of-levels-in-binary-tree/submissions/

class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        if(root==NULL)
            return {};
        TreeNode* temp;
        double sum=0;
        queue <TreeNode*> res;
        res.push(root);
        vector <int> v;
        vector<double> result;
        int l;
        while(!res.empty()){
            l = res.size();
            for(int i=0;i<l;i++){
                temp = res.front();
                res.pop();
                v.push_back(temp->val);
                
                if(temp->left)
                    res.push(temp->left);
                if(temp->right)
                    res.push(temp->right);
            }
            for(auto x:v){
                // cout<<x<<endl;
                sum += x;
            }
            // cout << sum <<endl;
            result.push_back(sum/v.size());
            v.clear();
            sum=0;
        }
        // reverse(result.begin(),result.end());
        return result;
    }
};
