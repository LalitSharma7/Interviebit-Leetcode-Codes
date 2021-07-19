 ListNode *head=A;
    ListNode *base=A;
    while(base)
    {
        if(base->val==0)
        {
            head->val=0;
            head=head->next;
        }
        base=base->next;
    }
    while(head)
    {
        head->val=1;
        head=head->next;
    }
    return A;
