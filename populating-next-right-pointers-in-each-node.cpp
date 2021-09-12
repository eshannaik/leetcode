// https://leetcode.com/problems/populating-next-right-pointers-in-each-node/submissions/
// https://leetcode.com/problems/populating-next-right-pointers-in-each-node-ii/submissions/

class Solution {
public:
    Node* connect(Node* root) {
        if(!root)
            return NULL;
        
        queue <Node*> q;
        q.push(root);
        
        while(!q.empty())
        {
            int l=q.size();
            
            for(int i=0;i<l;i++)
            {
                Node* temp = q.front();
                q.pop();
                
                if (i == l-1)
                    temp->next = NULL;
                else
                    temp->next = q.front();
                if(temp->left)
                    q.push(temp->left);
                if(temp->right)
                    q.push(temp->right);
            }
        }
        return root;
    }
};
