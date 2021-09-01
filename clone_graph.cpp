// https://leetcode.com/problems/clone-graph/submissions/

class Solution {
public:
    Node* cloneGraph(Node* node) {
        if(!node)
            return NULL;
        Node* copy = new Node(node -> val, {});
        unordered_map <Node*,Node*> res;
        res[node] = copy;
        queue <Node*> q;
        q.push(node);
        Node* temp;
        
        while(!q.empty())
        {
            temp = q.front();
            q.pop();
                
            for(auto n:temp->neighbors)
            {
                if(res.find(n)==res.end())
                {
                    res[n]=new Node(n->val,{});   
                    q.push(n);
                }
                res[temp]->neighbors.push_back(res[n]);
            }
        }
        return copy;
    }
};
