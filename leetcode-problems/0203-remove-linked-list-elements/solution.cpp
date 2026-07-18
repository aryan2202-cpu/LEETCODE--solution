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
    vector<int> LLtoArr(vector<int>& arr, ListNode* head, ListNode* temp, int val){
        while(temp != NULL){
            if(temp->val!=val)
                arr.push_back(temp->val);
            temp = temp->next;
        }
        return arr;
    }
    ListNode* ArrtoLL(vector<int>& arr, ListNode* head, ListNode* temp, int m){
        if(arr.empty()) return NULL;
        ListNode* newHead = new ListNode(arr[0]);
        ListNode* curr = newHead;
        for(int i = 1;i< m;i++){
            curr->next = new ListNode(arr[i]);
            curr = curr->next;
        } 
        return newHead;
    }
    ListNode* removeElements(ListNode* head, int val) {
        if (head == NULL) return NULL;
        ListNode* temp = head;
        vector<int> arr;
        arr = LLtoArr(arr, head, temp, val);
        int m = arr.size();
        ListNode* head2 = ArrtoLL(arr, head, temp, m);
        return head2;
    }
};
