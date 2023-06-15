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
        ListNode* f = head, *s = head;

        while(s)
        {
            
            

            s = s->next;
            if(f and f->next)
            {
                f = f->next->next;
            }

            if(s == f)
            {
                break;
            }

        }

        if(s == NULL)
        {
            return NULL;
        }

        
        s = head;

        while(s)
        {

             if(s == f)
            {
                break;
            }
           

            s = s->next;
            if(f)
            f = f->next;

            

        }

        return s;


    }
};
