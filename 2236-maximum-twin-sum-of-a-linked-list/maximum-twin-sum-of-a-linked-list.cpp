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
    ListNode* reverseLinkedList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;
        while (curr != NULL) {
            ListNode* nextnode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextnode;
        }
        return prev;
    }

    int lengthOfLL(ListNode* head) {
        int count = 0;
        ListNode* temp = head;
        while (temp != NULL) {
            count++;
            temp = temp->next;
        }
        return count;
    }

    int pairSum(ListNode* head) {
        int length = lengthOfLL(head);
        ListNode* mid = head;
        for (int i = 0; i < length / 2; i++) {
            mid = mid->next;
        }
        ListNode* revList = reverseLinkedList(mid);
        ListNode* temp = head;
        ListNode* temp1 = revList;
        vector<int> arr;
        int count = 0;
        while (temp1 != NULL && temp != NULL) {
            int sum = temp1->val + temp->val;
            arr.push_back(sum);
            temp1 = temp1->next;
            temp = temp->next;
            count++;
            if (count == length / 2) break;
        }
        sort(arr.begin(), arr.end());
        return arr[arr.size() - 1];
    }
};