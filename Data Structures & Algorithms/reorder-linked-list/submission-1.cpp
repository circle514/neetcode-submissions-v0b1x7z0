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

    void reorderList(ListNode* head) {
        if (head->next == nullptr) {
            return;
        }
        
        ListNode *first = head;
        ListNode *prev = head;
        ListNode *second = head;
        ListNode *fast = head;
        
        while (fast != nullptr && fast->next != nullptr) {
            prev = second;
            second = second->next;
            fast = fast->next->next;
        }
         
        prev->next = nullptr;
        reverse(second);
        
        while (first != nullptr && second != nullptr) {
            ListNode *temp1 = first->next; 
            ListNode *temp2 = second->next;

            first->next = second;
            if (temp1 == nullptr) {
                break;
            }
            second->next = temp1;

            first = temp1;
            second = temp2;
        }
    }
};
