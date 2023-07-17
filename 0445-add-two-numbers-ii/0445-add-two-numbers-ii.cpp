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
        stack<int> st1,st2;
        while(l1)
        {
            st1.push(l1->val);
            l1=l1->next;
        }
        while(l2)
        {
            st2.push(l2->val);
            l2=l2->next;
        }
        int carry=0,first,second;
        ListNode *head=NULL;
        while(!st1.empty()||!st2.empty()||carry)
        {
            if(st1.empty())
            {
                first=0;
            }
            else
            {
                first=st1.top();
                st1.pop();
            }
            if(st2.empty())
            {
                second=0;
            }
            else
            {
                second=st2.top();
                st2.pop();
            }
            int temp=first+second+carry;
            ListNode *node=new ListNode(temp%10);
            node->next=head;
            head=node;
            carry=temp/10;
            
        }
        return head;
    }
};