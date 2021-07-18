if(B == C) 
      return A;
   int count = 0;
    ListNode* curr = A, *left = NULL, *start = NULL;
    while(count<=B && curr){
         count++;
          if(count == B-1) left = curr;
          if(count == B) start = curr;
          curr = curr->next;
       }

     count--;

     curr = start;
     ListNode* prev = NULL, *next = NULL;

    while(count <= C){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }

    start->next = curr;

    if(left){
       left->next = prev;
       return A;
     }

   if(!left) 
      return prev;
}
