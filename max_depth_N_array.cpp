// https://leetcode.com/problems/maximum-depth-of-n-ary-tree/submissions/

class Solution {
public:
    int maxDepth(Node* root) {
        if(root==NULL)
            return 0;
        queue <Node*>q;
        q.push(root);
        Node* temp;
        int l,c=0;
        while(!q.empty()){
            l=q.size();
            for(int i=0;i<l;i++){
                temp = q.front();
                q.pop();

                for(auto x:temp->children){
                    q.push(x);
                }
            }
            c++;
        }
        return c;
    }
};
