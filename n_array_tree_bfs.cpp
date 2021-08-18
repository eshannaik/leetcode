// https://leetcode.com/problems/n-ary-tree-level-order-traversal/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        if(root == NULL)
            return {};
        Node* temp;
        queue <Node*> q; 
        q.push(root);
        vector<int>v;
        vector<vector<int>>result;
        int len;
        while(!q.empty())
        {
            len = q.size();
            for(int i=0;i<len;i++)
            {
                temp = q.front();
                q.pop();
                v.push_back(temp->val);
                
                for(Node* x: temp->children)
                    q.push(x);
            }
            result.push_back(v);
            v.clear();
        }
        return result;
    }
};
