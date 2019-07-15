ListNode* Solution::partition(ListNode* A, int B) {
    ListNode* less = new ListNode(0);
    ListNode* head = less;
    ListNode* more = new ListNode(0);
    ListNode* head2 = more;
    ListNode* curr = A;
    while(curr) {
        if(curr->val < B) {
            ListNode* temp = new ListNode(curr->val);
            less->next = temp;
            less = less->next;
        }
        else {
            ListNode* temp = new ListNode(curr->val);
            more->next = temp;
            more = more->next;
        }
        curr = curr->next;
    }
    less->next = head2->next;
    head = head->next;
    return head;
}