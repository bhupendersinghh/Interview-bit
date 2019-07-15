ListNode* Solution::addTwoNumbers(ListNode* A, ListNode* B) {
    ListNode* sum = new ListNode(0);
    ListNode* sol = sum;
    ListNode* curr = A, *curr2 = B;
    int carry = 0;
    while(curr && curr2) {
        int sum2 = curr->val + curr2->val + carry;
        int digit = sum2 % 10;
        carry = sum2 / 10;
        ListNode* temp = new ListNode(digit);
        sum->next = temp;
        sum = sum->next;
        curr = curr->next;
        curr2 = curr2->next;
    }
    if(curr) {
        while(curr) {
            int sum2 = curr->val + carry;
            int digit = sum2 % 10;
            carry = sum2 / 10;
            ListNode* temp = new ListNode(digit);
            sum->next = temp;
            sum = sum->next;
            curr = curr->next;
        }
    }
    if(curr2) {
        while(curr2) {
            int sum2 = curr2->val + carry;
            int digit = sum2 % 10;
            carry = sum2 / 10;
            ListNode* temp = new ListNode(digit);
            sum->next = temp;
            sum = sum->next;
            curr2 = curr2->next;
        }
    }
    if(carry == 1) {
        sum->next = new ListNode(1);
    }
    return sol->next;
}
