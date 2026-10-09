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
private:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;
        while (curr != nullptr) {
            ListNode* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }
        return prev;
    }
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp1 = reverseList(l1);
        ListNode* temp3 = reverseList(l2);
        int carry = 0;
        ListNode* LL = new ListNode(-1);
        ListNode* current = LL;
        while (temp1 != nullptr || temp3 != nullptr || carry > 0) {
            int add = carry;
            if (temp1 != nullptr) {
                add += temp1->val;
                temp1 = temp1->next;
            }
            if (temp3 != nullptr) {
                add += temp3->val;
                temp3 = temp3->next;
            }
            carry = add / 10;
            current->next = new ListNode(add % 10);
            current = current->next;
        }
        return reverseList(LL->next);
    }
};