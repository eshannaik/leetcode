// https://leetcode.com/problems/reverse-linked-list/submissions/

class Solution {
public:
    ListNode* helper (ListNode* head,ListNode* prev)
    {
        if(!head)
            return prev;
        ListNode* next = head->next;
        head->next=prev;
        return helper(next,head);
    }
    
    ListNode* reverseList(ListNode* head) {
        return helper (head,NULL);
    }
};
