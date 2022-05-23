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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* l3=new ListNode();
        ListNode* temp=l3;
        int c=0;
        while(l1!=NULL && l2!=NULL)
        {
            temp->val=(l1->val+l2->val+c)%10;
            c=(l1->val+l2->val+c)/10;
            l1=l1->next;
            l2=l2->next;
            if(c!=0||l1!=NULL||l2!=NULL)
            {
                temp->next=new ListNode();
                temp=temp->next;
            }
        }
        if(c!=0 && l1==NULL && l2==NULL)
        {
            temp->val=c;
        }
        while(l1!=NULL)
        {
            temp->val=(l1->val+c)%10;
            c=(l1->val+c)/10;
            l1=l1->next;
            if(c!=0 || l1!=NULL)
            {
                temp->next=new ListNode();
                temp=temp->next;
            }
        }
        while(l2!=NULL)
        {
            temp->val=(l2->val+c)%10;
            c=(l2->val+c)/10;
            l2=l2->next;
            if(c!=0 || l2!=NULL)
            {
                temp->next=new ListNode();
                temp=temp->next;
            }
        }
        if(c!=0)
        {
            temp->val=c;
        }
        return l3;
    }
};