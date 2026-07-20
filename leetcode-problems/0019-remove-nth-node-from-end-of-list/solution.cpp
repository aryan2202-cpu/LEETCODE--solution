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
   vector<int> LLtoArr(ListNode* head,ListNode* temp){
    vector<int> arr;
    temp = head;
    while(temp!=NULL){
        arr.push_back(temp->val);
        temp=temp->next;
    }
    return arr;
   }
   ListNode* ArrtoLL( ListNode*head, ListNode*temp , vector<int>& arr){
    if (arr.empty()) return nullptr;
    ListNode* head3 = new ListNode(arr[0]);
    ListNode* curr = head3;
    for(int i =1;i<arr.size();i++){
        curr->next = new ListNode(arr[i]);
        curr = curr->next;
    }
    return head3;
   }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL) return NULL;
        ListNode* temp = head;
        vector<int> arr = LLtoArr(head,temp);
        int m = arr.size();
        arr.erase(arr.begin()+m-n);
        ListNode* head2 = ArrtoLL(head,temp,arr);
        return head2;
    }
};
