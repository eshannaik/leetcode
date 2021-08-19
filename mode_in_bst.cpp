// https://leetcode.com/problems/find-mode-in-binary-search-tree/submissions/

class Solution {
public:
    map <int,int> res;
    void inorder(TreeNode* root){
        if(root==NULL)
            return;
        else 
            res[root->val]++;
        inorder(root->left);
        // v.push_back(root->val);
        inorder(root->right);
    }
    
    vector<int> findMode(TreeNode* root) {
        int max=-1,temp;
        inorder(root);
        vector<int>result;
        
        // for(auto x:v){
        //     if(res.find(x)==res.end())
        //         res[x]=1;
        //     else
        //         res[x]++;
        // }
        
        for(auto x:res){
            // cout << x.first << " " << x.second << endl;
            if(x.second>max){
                max = x.second;
                temp = x.first;
            }
        }
        res.erase(temp);
        
        for(auto x:res){
            if(x.second==max){
                result.push_back(x.first);
            }
        }
        
        result.push_back(temp);
        return result;
    }
};
