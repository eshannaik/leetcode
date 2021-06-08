// https://leetcode.com/problems/intersection-of-two-linked-lists/submissions/

struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    struct ListNode* temp = headA;
    struct ListNode* temp1 = headB;
    int a=0,b=0;
    
    while(temp != NULL || temp1 !=NULL)
    {
        if(temp != NULL)
        {
            a++;
            temp=temp->next;
        }
        if(temp1 != NULL)
        {
            b++;
            temp1=temp1->next;
        }
    }
    if(a>b)
    {
        for(int i=0;i<(a-b);i++)
        {
            printf("%d",headA->val);
            headA = headA -> next;
        }
    }
    else if(b>a)
    {
        for(int i=0;i<(b-a);i++)
            headB = headB ->next;
    }
    while(headA != NULL && headB != NULL)
    {
        if(headA==headB)
            return headA;
        headA = headA->next;
        headB = headB->next;
    }
    return NULL;
}
