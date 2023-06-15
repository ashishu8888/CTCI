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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* curr1 = headA, *curr2 = headB;
        int l1=0,l2=0;

        while(curr1)
        {
            l1++;
            curr1 = curr1->next;
        }

        
        while(curr2)
        {
            l2++;
            curr2 = curr2->next;
        }

        cout<<l1<<" "<<l2<<endl;


        curr1 = headA;
        curr2 = headB;

        int diff = abs(l1-l2);

        if(l1<l2)
        {
            for(int i=0;i<diff;i++)
            {
                curr2 = curr2->next;
            }
           // cout<<curr2->val<<endl;
        }
        else{
            for(int i=0;i<diff;i++)
            {
                curr1 = curr1->next;
            }
           // cout<<curr1->val<<endl;
        }

        while(curr1 and curr2)
        {
            if(curr1 == curr2)
            {
                return curr1;
            }
           // cout<<curr1->val<<" "<<curr2->val<<endl;
            curr1 = curr1->next;
            curr2 = curr2->next;
            
            
            

        }

        return NULL;
        

    }
};
