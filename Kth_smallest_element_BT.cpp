// https://leetcode.com/problems/kth-smallest-element-in-a-bst/

class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {
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
                // cout << temp->val << endl;
                v.push_back(temp->val);
                
                if(temp->left)
                    res.push(temp->left);
                if(temp->right)
                    res.push(temp->right);
            }
            // cout << sum <<endl;
            sum=0;
        }
        sort(v.begin(),v.end());
        return v[k-1];
    }
};
