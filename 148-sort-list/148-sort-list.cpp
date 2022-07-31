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
    ListNode* sortList(ListNode* head) {
        ListNode * ac = head;
        vector<int> a;
        while (ac != NULL)
        {
            a.push_back(ac->val);
            ac = ac->next;
        }
        sort(a.begin(),a.end());
        ac = head;
        int i = 0;
        while (ac != NULL)
        {
            ac->val = a[i++];
            ac = ac->next;
        }
        return head;
    }
};