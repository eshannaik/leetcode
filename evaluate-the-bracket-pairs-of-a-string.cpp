// https://leetcode.com/problems/evaluate-the-bracket-pairs-of-a-string/submissions/

class Solution {
public:
    string evaluate(string s, vector<vector<string>>& k) {
        string temp="";
        string w="";
        stack <char> st;
        int flag=0;
        
        unordered_map<string, string> m;
        for (auto &x : k)
            m[x[0]] = x[1];
        
        for(auto x:s)
        {
            if(x=='(')
                st.push(x);
            
            else if(st.empty())
            {
                if(x!=')')
                    w +=x;
            }
            
            else if(!st.empty())
            {
                if(x != '(' && x != ')')
                    temp += x;
                // cout << temp << endl;
                // cout << x << endl;
                if(x==')')
                {
                    // cout << temp << endl;
                    // for(int i=0;i<k.size();i++)
                    // {
                    //     if(k[i][0]==temp)
                    //     {
                    //         // cout << temp << endl;
                    //         w += k[i][1];
                    //         temp="";
                    //         st.pop();
                    //         flag=1;
                    //         break;
                    //     }
                    // }
                    // // cout << w << endl;
                    // if(flag==0)
                    // {
                    //     w += '?';
                    //     temp="";
                    //     st.pop();
                    // }
                    // flag=0;
                    // cout << temp << endl;
                    if(m.find(temp)==m.end())
                        w +='?';
                    else
                        w +=m[temp];
                    temp = "";
                    st.pop();
                    // break;
                }
            }
            
        }
        return w;
    }
};
