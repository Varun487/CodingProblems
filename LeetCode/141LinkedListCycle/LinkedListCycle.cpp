/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        // Floyd’s Cycle-Finding Algorithm: Time:O(n), Space:O(1)
        ListNode* fast = head;
        ListNode* slow = head;
        while (fast != NULL && fast->next != NULL && fast->next->next != NULL) {
            fast = fast->next-> next;
            slow = slow->next;
            if (fast == slow) {
                return true;
            }
        }
        return false;
    }
};
