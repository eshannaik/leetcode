// https://leetcode.com/problems/implement-strstr/submissions/

class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle == "")
            return 0;
        if(haystack.find(needle) != std::string::npos)
            return haystack.find(needle);
        else
            return -1;
    }
};
