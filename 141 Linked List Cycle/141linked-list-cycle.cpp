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
        ListNode* fast_ptr = head;
        ListNode* slow_ptr = head;

        if(head == NULL)
        {
            return false;
        }

        while(fast_ptr->next != NULL && fast_ptr->next->next != NULL)
        {
            fast_ptr = fast_ptr->next->next;
            slow_ptr = slow_ptr->next;

            if(fast_ptr == slow_ptr)
            {
                return true;
            }
        }

        return false;
    }
};