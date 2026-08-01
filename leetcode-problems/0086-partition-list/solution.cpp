/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        if(head==NULL) return NULL;
       ListNode* temp = head;
       ListNode* head2 = new ListNode(0);
       ListNode* temp2 = head2; 
       ListNode* prev2 = NULL;
       while(temp!=NULL){
       if(temp->val<x){
        temp2->val = temp->val;
        temp2->next = new ListNode(0);
        prev2 = temp2;
        temp = temp->next;
        temp2 = temp2->next;
       }  
       else { temp = temp->next; }
       }
       temp = head;
       while(temp!=NULL){
        if(temp->val>=x){
            temp2->val = temp->val;
            temp2->next = new ListNode(0);
            prev2 = temp2;
            temp = temp->next;
            temp2 = temp2->next;
        }
        else { temp = temp->next; }
       }
       if(prev2!=NULL){
            prev2->next=NULL;
        }
       head = head2;
       return head;
    }
};
