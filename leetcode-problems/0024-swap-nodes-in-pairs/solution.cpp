class Solution {
public:
    int lengthofLL(ListNode*temp){
        int count = 0;
        while(temp!=NULL){
            temp = temp->next;
            count++;
        }
        return count;
    }
    ListNode* swapPairs(ListNode* head) {
        ListNode dummy(0);
        dummy.next = head;
        ListNode* prev = &dummy;
        while(prev->next!= NULL&&prev->next->next!=NULL){
            ListNode* first =prev->next;
            ListNode* second =first->next;
            first->next =second->next; 
            second->next =first;       
            prev->next =second;        
            prev = first;
        }
        return dummy.next;
    }
};
