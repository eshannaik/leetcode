// https://leetcode.com/problems/n-ary-tree-postorder-traversal/submissions/
// Postorder

class Solution {
public:
    vector<int> postorder(Node* root) {
        vector <int> v;
        postorderTraversal(root,v);
        return v;
    }
    void postorderTraversal(Node* root,vector <int> &v)
    {
        if(root)
        {
            vector <Node*>child = root->children;
            for(int i=0;i<child.size();i++)
                postorderTraversal(child[i],v);
            v.push_back(root->val);
        }
    }
};

//https://leetcode.com/problems/n-ary-tree-preorder-traversal/submissions/
//Preorder

class Solution {
public:
    vector<int> preorder(Node* root) {
        vector <int> v;
        preorderTraversal(root,v);
        return v;
    }
    void preorderTraversal(Node* root,vector <int> &v)
    {
        if(root)
        {
            vector <Node*>child = root->children;
            v.push_back(root->val);
            for(int i=0;i<child.size();i++)
                preorderTraversal(child[i],v);  
        }
    }
};
