// https://leetcode.com/problems/middle-of-the-linked-list/submissions/

struct ListNode* middleNode(struct ListNode* head){
    struct ListNode * temp = head;
    struct ListNode * temp1 = head;
    while(temp1 != NULL && temp1->next !=NULL)
    {
        temp = temp->next;
        temp1 = temp1->next->next;
    }
    return temp;
}
