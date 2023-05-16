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
    ListNode* swapPairs(ListNode* head) {
        ListNode *curr,*nextnode;
        curr=head;
        nextnode=head;
        if(head==NULL || head->next==NULL)
            return head;
        while(nextnode->next!=NULL)
        {
            nextnode=nextnode->next;
            swap(curr->val,nextnode->val);
            if(nextnode->next!=NULL)
            {
                curr=nextnode->next;
                nextnode=nextnode->next;
            }
        }
        return head;
    }
};