ListNode* Solution::solve(ListNode* A, int B) {
    ListNode*prev;
    ListNode*curr;
    ListNode*nex;
    ListNode*h;
    
    curr = A;
    prev = NULL;
    
    if(A==NULL)
       return NULL;
    
    for(int i=0;i<B;i++)
    {
        nex = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nex;
    }
    
    h = prev;
    A->next = curr;
    
    if(curr==NULL)
    {
        return h;
    }
    
    for(int i=0;i<B-1;i++)
    {
        curr = curr->next;
    }
    
    curr->next = solve(curr->next, B);
    
    return h;
}
