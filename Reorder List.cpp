//Function to reverse Linked List
ListNode* reverseList(ListNode* A) {
    ListNode* curr = A;
    ListNode* last, *prev, *temp;
    while(curr) {
        temp = curr->next;
        if(!curr->next) {
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
    }
    return last;
}


ListNode* Solution::reorderList(ListNode* A) {
    if(!A || !A->next) {
        return A;
    }
    ListNode* curr = A;
    ListNode* head = curr;
    ListNode* mid = A;
    ListNode* prev;

    //Find mid of LL
    while((curr != NULL) && (curr->next != NULL)){
        curr = (curr->next)->next;
        prev = mid;
        mid = mid->next;
    }

    //Reverse It
    mid = reverseList(mid);

    //Set the previous of mid to null
    prev->next = NULL;
    curr = A;
    ListNode* temp;
    ListNode* last;

    //Merge two lists
    while(curr) {
        //Store last so that you can add the last node of the mid list to the list if it hasn't been added yet
        if(!curr->next) {
            last = curr;
        }
        temp = curr->next;
        curr->next = mid;
        curr = temp;
        temp = mid->next;
        mid->next = curr;
        mid = temp;
    }

    //Add the last node to list if mid is NULL
    if(mid) {
        last = last->next;
        last->next = mid;
    }
    
    return A;
}
