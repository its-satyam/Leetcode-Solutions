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
//         if(!head)   
//             return nullptr;
//         stack<ListNode* > s;
//         while(head)
//         {
//             ListNode* temp = head;
//             s.push(head);
//             head = head->next;
//             temp->next = nullptr;
//         }
//         ListNode *dummy = new ListNode, *cur = dummy;
//         while(!s.empty())
//         {
//             cur->next = s.top();
//             cur = cur->next;
//             s.pop();
//         }
//         return dummy->next;
        
        ListNode *prev,*current,*nextnode;
        prev=NULL;
        current=nextnode=head;
        while(nextnode!=NULL)
        {
            nextnode=nextnode->next;
            current->next=prev;
            prev=current;
            current=nextnode;
        }
        head=prev;
        return head;
         }
};