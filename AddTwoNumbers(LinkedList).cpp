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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans= new ListNode(0);
        ListNode* temp=ans;
        ListNode* curr1=l1;
        ListNode* curr2=l2;
        int carry=0;
        while(curr1!=NULL && curr2!=NULL)
        {
            temp->val=(curr1->val+curr2->val+carry)%10;
            carry=((curr1->val+curr2->val+carry)/10);
            if (curr1->next!=NULL || curr2->next!=NULL || carry==1)
            {
                ListNode* temp2 = new ListNode(0);
                temp->next=temp2;
            }
            temp=temp->next;
            curr1=curr1->next;
            curr2=curr2->next;
        }
        while (curr1!=NULL)
        {
            temp->val=(curr1->val+carry)%10;
            carry=((curr1->val+carry)/10);
            if (curr1->next!=NULL || carry==1)
            {
                ListNode* temp2 = new ListNode(0);
                temp->next=temp2;
            }
            temp=temp->next;
            curr1=curr1->next; 
        }
        while (curr2!=NULL)
        {
            temp->val=(curr2->val+carry)%10;
            carry=((curr2->val+carry)/10);
            if (curr2->next!=NULL || carry==1)
            {
                ListNode* temp2 = new ListNode(0);
                temp->next=temp2;
            }
            temp=temp->next;
            curr2=curr2->next; 
        }
        if (curr1==NULL && curr2==NULL && carry==1)
        {
            temp->val=1;
            carry=0;
        }
        return ans;
    }
};
