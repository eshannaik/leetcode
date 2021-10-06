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

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* n=NULL,*p=NULL;
        ListNode* curr=head;
        
        while(curr!=NULL)
        {
            n = curr->next;
            curr->next = p;
            
            p = curr;
            curr = n;
        }
        return p;
    }
};
