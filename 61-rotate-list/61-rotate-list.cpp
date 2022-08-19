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
    ListNode* rotateRight(ListNode* head, int k) {
       // handle special case length is 0 or 1
        if (head == nullptr || head->next == nullptr) 
            return head;

        // calculate list length
		// we also need to find the tail node and point it to head at the end
        int length = 1;
        ListNode* tail = head;
        while (tail->next != nullptr)
        {
            tail = tail->next;
            length ++;
        }
        
        //calcualte k so rotate at most length-1 steps
        k = k % length;
        if (k == 0) 
            return head;
        
		//split the list to two lists.
        ListNode* newHead = head;
        ListNode* newTail = head;; 
        while (length > k)
        {
            newTail = newHead;
            newHead = newHead->next;
            length --;
        }
        newTail->next = nullptr;
        tail->next = head;
        return newHead;
    }
};