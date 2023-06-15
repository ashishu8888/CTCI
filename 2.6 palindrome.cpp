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
    bool isPalindrome(ListNode* head) {
        ListNode* f=head,*s=head;

        stack<int> st;

        while(f!=NULL and f->next!=NULL)
        {
            st.push(s->val);
            s=s->next;
            f=f->next->next;
        }

        if(f!=NULL)
        {
            s=s->next;
        }

        while(s!=NULL)
        {
            if(s->val!=st.top())
            {
                return false;
            }
            st.pop();
            s = s->next;
        }

        return true;


    }
};
