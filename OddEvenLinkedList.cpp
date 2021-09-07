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
    ListNode* oddEvenList(ListNode* head) {
        if (head==NULL || head->next==NULL || head->next->next==NULL)
        {
            return head;
        }
        ListNode* start=head;
        ListNode* curr = head;
        ListNode* p =head;
        ListNode* n = head->next;
        ListNode* evestart=head->next;
        while (n!=NULL)
        {
            curr->next=n->next;
            p=curr;
            curr=n;
            n=n->next;
        }
        curr=head;
        while (curr->next!=NULL)
        {
            curr=curr->next;
        }
        curr->next=evestart;
        //std::cout<<evestart->val;
        return start;
        
        
    }
};
