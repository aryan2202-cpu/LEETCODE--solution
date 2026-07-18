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
    ListNode* ConvertArr2LL(vector<int> arr) {
        ListNode* l1 = new ListNode(arr[0]);
        ListNode* mover = l1;
        int n = arr.size();
        for (int i = 1; i < n; i++) {
            ListNode* temp = new ListNode(arr[i]);
            mover->next = temp;
            mover = temp;
        }
        return l1;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode* temp1 = l1;
    ListNode* temp2 = l2;
    vector<int> arr;
    int carry = 0;
    while (temp1 != NULL || temp2 != NULL || carry != 0) {
        int sum = carry;
        if (temp1 != NULL) {
            sum += temp1->val;
            temp1 = temp1->next;
        }
        if (temp2 != NULL) {
            sum += temp2->val;
            temp2 = temp2->next;
        }
        arr.push_back(sum % 10);
        carry = sum / 10;
    }
    ListNode* result = ConvertArr2LL(arr);
    return result;
}
};
