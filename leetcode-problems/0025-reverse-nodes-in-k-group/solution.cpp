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
    int LengthofLL(ListNode* head, int count)
    {
        ListNode* temp = head;
        while(temp!=NULL){
            count++;
            temp = temp->next;
        }
        return count;
    }

    void reversing(vector<int>& arr1, vector<int>& arr2, int m){
        for(int i = 0; i<m; i++){
            arr2.push_back(arr1[i]);
        }
        reverse(arr2.begin(), arr2.end());
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        int count = 0;
        int n = LengthofLL(head, count);

        ListNode* temp = head;
        ListNode* newHead = nullptr;
        ListNode* prevTail = nullptr;

        while(n >= k){
            vector<int> arr1;
            for(int i = 0; i<k; i++){
                arr1.push_back(temp->val);
                temp = temp->next;
            }

            vector<int> arr2;
            reversing(arr1, arr2, k);

            for(int i = 0; i<k; i++){
                ListNode* node = new ListNode(arr2[i]);
                if(newHead == nullptr){
                    newHead = node;
                    prevTail = node;
                } else {
                    prevTail->next = node;
                    prevTail = node;
                }
            }
            n = n - k;
        }

        if(prevTail != nullptr){
            prevTail->next = temp;
        } else {
            newHead = temp;
        }

        return newHead;
    }
};
