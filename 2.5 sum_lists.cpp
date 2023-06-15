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
    ListNode* fun(ListNode* l1, ListNode* l2,int carry) {
        if(l1 == NULL and l2 == NULL and carry == 0)
        {
            return NULL;
        }

        ListNode* result = new ListNode();

        int value = carry;

        if(l1!=NULL)
        {
            value += l1->val;
        }
        if(l2!=NULL)
        {
            value += l2->val;
        }

        result->val = value%10;

        carry = value/10;

        if(l1)
        {
            l1 = l1->next;
        }

        if(l2)
        {
            l2 = l2->next;
        }

        ListNode* more = fun(l1,l2,carry);

        result->next = more;

        return result;


    }


    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        return fun(l1,l2,0);
    }
};
