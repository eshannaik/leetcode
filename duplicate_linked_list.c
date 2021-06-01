// https://leetcode.com/problems/remove-duplicates-from-sorted-list/

struct ListNode* deleteDuplicates(struct ListNode* head){
    struct ListNode *temp = malloc(sizeof(struct ListNode));
    temp = head;
    if(temp == NULL)
        return head;
    while(temp->next!=NULL)
    {
            if(temp->val == temp->next->val)
            {
                printf("%d",temp->val);
                temp->next = temp->next->next;
            }
            else
            {
                temp = temp->next;
            }
    }
    return head;
}
