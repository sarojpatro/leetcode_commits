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
    int gcd(int a, int b)
    {
        //cout << "a: " << a << "b: " << b << endl;
        if(b == 0) return a;
        return gcd(b, a%b);
    }
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(!head || !head->next) return head;

        ListNode* cur=head;
        while(cur && cur->next)
        {
            ListNode* l= new ListNode(gcd(cur->val, cur->next->val));
            l->next = cur->next;
            cur->next=l;
            cur = l->next;
        }

        return head;
    }
};