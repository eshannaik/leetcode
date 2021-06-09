// https://leetcode.com/problems/linked-list-cycle/submissions/

bool hasCycle(struct ListNode *head) {
    struct ListNode * slow = head;
    struct ListNode * fast = head;
    if(slow == NULL || slow->next == NULL)
    {
        return false;
    }
    while(slow != NULL && fast !=NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if(slow==fast)
            return true;
    }
    return false;
}
