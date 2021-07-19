    
    ListNode*temp = NULL;
    ListNode*res = NULL;
    ListNode*prev = NULL;
    ListNode*f = A;
    ListNode*s = B;
    int carry =0;
    int sum;
    
    while(f!=NULL || s!=NULL)
    {
        sum = carry+(f?f->val:0)+(s?s->val:0);
        carry = (sum>=10)?1:0;
        sum = sum%10;
        
        temp = new ListNode(sum);
        if(res==NULL)
        {
            res = temp;
        }
        else
        {
            prev->next = temp;
        }
        prev = temp;
        if(f)
        {
            f = f->next;
        }
        
        if(s)
        {
            s = s->next;
        }
    }
    
    if(carry>0)
    {
        temp->next = new ListNode(carry);
    }
    
    return res;
}
