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
    ListNode* middle(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head->next;
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
    ListNode* mergeTwoList(ListNode* l1, ListNode* l2) {
        ListNode dummy(0);
        ListNode* current = &dummy;
        while (l1 && l2) {
            if (l1->val < l2->val) {
                current->next = l1;
                l1 = l1->next;
            } else {
                current->next = l2;
                l2 = l2->next;
            }
            current = current->next;
        }
        current->next = (l1) ? l1 : l2;
        return dummy.next;
    }
    ListNode* sortList(ListNode* head) {
        // Write your code here...
        if (!head || !head->next)
            return head;
        ListNode* mid = middle(head);
        ListNode* right = mid->next;
        mid->next = nullptr;
        ListNode* leftsorted = sortList(head);
        ListNode* rightsorted = sortList(right);
        return mergeTwoList(leftsorted, rightsorted);
    }
    };