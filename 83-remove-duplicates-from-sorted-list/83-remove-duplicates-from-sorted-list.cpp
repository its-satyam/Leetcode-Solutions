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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *temp,*itr,*node;
        if(head==NULL)
            return head;
        temp=head;
        itr=head->next;
        while(itr!=NULL)
        {
            if(itr->val==temp->val)
            {
                node=itr;
                itr=itr->next;
                temp->next=itr;
                delete node;
            }
            else
            {
                temp=temp->next;
                itr=itr->next;
            }
            
        }
        return head;
    }
};