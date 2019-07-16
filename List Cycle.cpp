ListNode* Solution::detectCycle(ListNode* A) {
    if(!A)
        return NULL;
    ListNode* tor = A;
    ListNode* hare = A;
    bool loop = false;

    //Checks if there is a cycle (tortoise and hare algo)
    while(hare && tor && hare->next) {
        tor = tor->next;
        hare = hare->next->next;
        if(tor == hare) {
            loop = true;
            break;
        }
    }
    if(loop) {
        //Setting tortoise to head and incrementing both, since distance is maintained, they'll only meet at the start of loop 
        tor = A;
        while(tor != hare){
            hare = hare->next;
            tor = tor->next;
        }
        return tor;
    }
    return NULL;
    
}
