// https://leetcode.com/problems/range-sum-of-bst/submissions/

class Solution {
public:
    vector<int>v;
    void inorder(TreeNode* root){
        if(root==NULL)
            return;
        inorder(root->left);
        v.push_back(root->val);
        inorder(root->right);
    }
    
    int rangeSumBST(TreeNode* root, int low, int high) {
        inorder(root);
        int sum=0;
        for(auto x:v){
            if(x>=low && x<=high)
                sum+=x;
        }
        return sum;
    }
};

// class Solution {
// public:
//     int rangeSumBST(TreeNode* root, int low, int high) {
//         vector <int> v;
//         TreeNode *temp;
//         queue<TreeNode*>q;
//         q.push(root);
//         int sum=0;
//         int l;
//         while(!q.empty()){
//             l = q.size();
//             for(int i=0;i<l;i++){
//                 temp = q.front();
//                 q.pop();
//                 v.push_back(temp->val);
                
//                 if(temp->left)
//                     q.push(temp->left);
//                 if(temp->right)
//                     q.push(temp->right);
//             }
//         }
//         for(auto x:v){
//             if(x>=low && x<=high)
//                 sum+=x;
//         }
//         return sum;
//     }
// };
