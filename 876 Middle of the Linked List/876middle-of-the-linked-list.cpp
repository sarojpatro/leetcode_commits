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
    ListNode* middleNode(ListNode* head) {
        if(head->next == nullptr) return head;

        ListNode* mid = head;
        ListNode* fast = head;

        while (head->next)
        {
            mid = mid->next;
            head = head->next;

            if(head->next)
            {
                head = head->next;
            }
        }

        return mid;
    }
};