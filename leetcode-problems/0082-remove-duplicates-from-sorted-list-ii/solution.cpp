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
    int LengthOfLL(ListNode* head,ListNode* temp){
        int count = 0;
        while(temp!=NULL){
            count++;
            temp = temp->next;
        }
        return count;
    }
    vector<int> convertLLtoArr(vector<int>& arr,ListNode* head,ListNode* temp){
        while(temp!=NULL){
            arr.push_back(temp->val);
            temp = temp->next;
        }
        return arr;
    }
    ListNode* convertArrtoLL(vector<int>&arr,ListNode*head,ListNode* temp){
        if(arr.empty()) return NULL;
        ListNode* newhead = new ListNode(arr[0]);
        ListNode* curr = newhead;
        for(int i = 1;i<arr.size();i++){
            curr->next = new ListNode(arr[i]);
            curr = curr->next;
        }
        return newhead;
    }
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL) return NULL;
        ListNode*temp = head;
        int n = LengthOfLL(head,temp);
        vector<int> arr; 
        arr = convertLLtoArr(arr,head , temp);
        map<int,int>mpp;
        vector<int> finalRes;
        for(int i = 0;i<arr.size();i++){
            mpp[arr[i]]++;
        }
        for(auto it: mpp){
            if(it.second > 1) continue;
            else finalRes.push_back(it.first);
        }
        ListNode* head2 = convertArrtoLL(finalRes,head,temp);
        return  head2;
    }
};
