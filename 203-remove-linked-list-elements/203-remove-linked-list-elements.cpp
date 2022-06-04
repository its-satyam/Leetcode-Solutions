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
    ListNode* removeElements(ListNode* head, int val) {
         if(head==NULL)
            return head;
        ListNode *prev=NULL, *curr = head;
        while(curr!=NULL)
        {
            if(curr->val == val)
            {
                if(prev==NULL)
                {
                    head = curr->next;
                    curr = head;
                }
                else
                {
                    prev->next = curr->next;
                    curr = curr->next;
                }
            }
            else
            {
                prev = curr;
                curr = curr->next;
            }
        }
        return head;
    }
};