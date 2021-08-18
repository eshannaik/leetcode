// https://leetcode.com/problems/cousins-in-binary-tree/submissions/

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root==NULL)
            return {};
        TreeNode* temp;
        queue <TreeNode*> res;
        res.push(root);
        vector <int> v;
        vector<vector<int>> result;
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
            result.push_back(v);
            v.clear();
        }
        return result;
    }
};

// PART 2
// https://leetcode.com/problems/binary-tree-level-order-traversal-ii/submissions/

class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        if(root==NULL)
            return {};
        TreeNode* temp;
        queue <TreeNode*> res;
        res.push(root);
        vector <int> v;
        vector<vector<int>> result;
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
            result.push_back(v);
            v.clear();
        }
        reverse(result.begin(),result.end());
        return result;
    }
};
