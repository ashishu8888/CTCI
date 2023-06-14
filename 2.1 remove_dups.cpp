/**
 * Definition of singly-linked-list:
 * class ListNode {
 * public:
 *     int val;
 *     ListNode *next;
 *     ListNode(int val) {
 *        this->val = val;
 *        this->next = NULL;
 *     }
 * }
 */

class Solution {
public:
    ListNode* removeDuplicates(ListNode *head) {
        // sc = O(1)
        map<int,int> mp;
        ListNode* curr = head,*prev = NULL;

        while(curr!=NULL)
        {
            if(mp[curr->val])
            {
                prev->next = curr->next;
            }
            else{
                prev = curr;
                mp[curr->val]++;
            }
            curr = curr->next;
        }

        return head;
    }
};
