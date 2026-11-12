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
    void reverse(ListNode *&head) {
        ListNode *curr = head;
        ListNode *prev = nullptr;
        while (curr != nullptr) {
            ListNode *iter = curr->next;
            curr->next = prev;
            prev = curr;
            curr = iter;
        }
        head = prev;
    }

    ListNode* removeNthFromEnd(ListNode* head, int n) {
        reverse(head);

        if (n == 1) {
            head = head->next;
            reverse(head);
            return head;
        }

        ListNode *curr = head;
        ListNode *prev = curr;
        for (int i = 1; i < n; i++) {
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;
        reverse(head);

        return head;
    }
};
