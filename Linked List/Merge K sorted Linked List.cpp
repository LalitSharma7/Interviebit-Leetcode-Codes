class Solution {
     struct comp{
        bool operator () (ListNode* lhs, ListNode* rhs){
           return lhs->val > rhs->val;
        }
     };
public:
    
    ListNode* mergeKLists(vector<ListNode*>& lists) {
         if(lists.size() == 0) return nullptr;
        
		// virtual head node
        ListNode * dummy = new ListNode(-1), * p = dummy;
		// priority queue, min heap
        priority_queue<ListNode*,vector<ListNode*>,comp> pq;
        
		// Add the heads of k linked lists to the min heap
        for(ListNode *head : lists){
            if(head != nullptr) pq.push(head);
        }
        
        while(!pq.empty()){
		// Get the smallest node and connect it to the result list
            ListNode* node = pq.top();
            pq.pop();
            p->next = node;
            if(node->next != nullptr) 
                pq.push(node->next);
			// p pointer keeps advancing
            p = p->next;
        }
        
        return dummy->next;
    }
}
