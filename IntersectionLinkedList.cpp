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
        ListNode* curr1=headA;
        ListNode* curr2=headB;
        int l1=0;
        int l2=0;
        while (curr1!=NULL)
        {
            l1++;
            curr1=curr1->next;
        }
        while (curr2!=NULL)
        {
            l2++;
            curr2=curr2->next;
        }
        curr1=headA;
        curr2=headB;
        if (l1>l2)
        {
            int r=l1-l2;
            while (r!=0)
            {
                curr1=curr1->next;
                r=r-1;
            }
        }
        else
        {
            int r=l2-l1;
            while (r!=0)
            {
                curr2=curr2->next;
                r=r-1;
            }
        }
        while(curr1!=NULL && curr2!=NULL)
        {
            if (curr1==curr2)
            {
                return curr1;
            }
            curr1=curr1->next;
            curr2=curr2->next;
        }
        return NULL;
        
    }
};
