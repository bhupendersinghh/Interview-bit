ListNode* reverseList(ListNode* A, int x) {
    ListNode* curr = A;
    ListNode* head = curr;
    ListNode* prev;
    ListNode* temp;
    ListNode* last;
    int i = 1;
    while(i <= x) {
        temp = curr->next;
        if(i == x) {
            last = curr;
        }
        if(curr == A) {
            curr->next = NULL;
            prev = curr;
            curr = temp;
        }
        else {
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        i++;
    }
    head->next = curr;
    return last;
} 

ListNode* Solution::reverseBetween(ListNode* A, int B, int C) {
    
    ListNode* curr = A;
    ListNode* head = curr;
    ListNode* first;
    ListNode* last;

    if(!curr || !curr->next)
        return A;
    
    for(int i = 1; i < B - 1; i++) {
        curr = curr->next;
    }
    
    if(B == 1) {
        return reverseList(curr, C - B + 1);
    }
    curr->next = reverseList(curr->next, C - B + 1);
    return head;
    
    
}
