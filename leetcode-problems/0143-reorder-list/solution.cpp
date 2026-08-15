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
    void reorderList(ListNode* head) {
        ListNode*temp = head;
        vector<int> arr;
        while(temp!=NULL){
            arr.push_back(temp->val);
            temp = temp->next;
        }
        int start = 0;
        vector<int> arr2;
        int end = arr.size()-1; 
        while(start<end){
            arr2.push_back(arr[start]);
             arr2.push_back(arr[end]);
            start++;
            end--;
        }
        if(start==end){         
            arr2.push_back(arr[start]);
        }
        ListNode* temp1 = head;
        for(int i = 0;i<arr2.size();i++){
           temp1->val = arr2[i];
            temp1 = temp1->next;
        }
    }
};
