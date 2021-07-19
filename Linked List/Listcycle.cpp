
    if(!A)
       return NULL;
    unordered_set<ListNode*> s;

    while(A)
    {
        if(s.find(A)==s.end())
            s.insert(A);
        else
            return A;
        A=A->next;
    }
    return NULL;
