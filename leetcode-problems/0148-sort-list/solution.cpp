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
    ListNode* sortList(ListNode* head) {
         vector<int> arr;
        ListNode* temp = head;
        if(temp==NULL){
          return nullptr;
        }
       while(temp!=NULL){
        arr.push_back(temp->val);
        temp = temp->next;
       }
       int n = arr.size();
       sort(arr.begin(),arr.end());
        ListNode* heads = new ListNode(arr[0]);
        ListNode* mover = heads;
        for(int i =1;i<arr.size();i++){
            ListNode* temper = new ListNode(arr[i]);
            mover->next = temper;
            mover = temper;
        }
        return heads;
    }
};
