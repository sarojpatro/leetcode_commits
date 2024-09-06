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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* cur = head;
        ListNode* prev = nullptr;

        while(cur)
        {
            if(cur->val == val)
            {
                if(cur == head)
                {
                    head = cur->next;
                    delete cur;
                    cur = head;
                }
                else
                {
                    prev->next = cur->next;
                    delete cur;
                    cur = prev->next;
                }
            }
            else
            {
                prev = cur;
                cur = cur->next;
            }
        }

        return head;
    }
};