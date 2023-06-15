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
ListNode* reverseList(ListNode* head) {
    ListNode* prev = NULL;
    ListNode* curr = head;
    while (curr != NULL) {
        ListNode* next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int x = 1,s1=0,s2=0;
       

        // l1 = reverseList(l1);
        // l2 = reverseList(l2);
        ListNode* c1 = l1,*c2=l2,*p=NULL;
        ListNode* curr = new ListNode(0);
        p = curr;
        int prev = 0;

        while(c1 and c2)
        {

            int x = c1->val+ c2->val + prev;
            cout<<c1->val<<" "<<c2->val<<" "<<x<<endl;
            if(x>9)
            {
                prev = 1;
                x = x%10;
            }
            else{
                prev = 0;
            }
            
            ListNode* c = new ListNode(x);
            curr->next = c;
            curr = curr->next;
            c1 = c1->next;
            c2 = c2->next;
        }

        cout<<prev<<endl;
        while(c1)
        {
             int x = c1->val+prev;
             if(x>9)
            {
                prev = 1;
                x = x%10;
            }
            else{
                prev = 0;
            }
            ListNode* c = new ListNode(x);
            curr->next = c;
              curr = curr->next;
            c1 = c1->next;
           
        }

        while(c2)
        {
             int x = c2->val+prev;
             if(x>9)
            {
                prev = 1;
                x = x%10;
            }
            else{
                prev = 0;
            }
            ListNode* c = new ListNode(x);
            curr->next = c;
              curr = curr->next;
            c2 = c2->next;
           
        }

        if(prev)
        {
            ListNode* c = new ListNode(1);
            curr->next = c;
        }
         //p = reverseList(p->next);

         return p->next;
        
    }
};
