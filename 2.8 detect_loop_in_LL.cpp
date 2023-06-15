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
    ListNode *detectCycle(ListNode *head) {

        ListNode* s = head,*f=head;
        bool ans = false;
        while(s!=NULL)
        {
            
        
            s = s->next;
            if(f and f->next)
            f = f->next->next;

            if(s == f)
            {
                break;
            }
            
            
        }
        if(s == NULL)
        return s;

        s = head;

        while(s!=f)
        {
            s=s->next;
            if(f)
            f =f->next;
        }
        

        return s;



    }
};
