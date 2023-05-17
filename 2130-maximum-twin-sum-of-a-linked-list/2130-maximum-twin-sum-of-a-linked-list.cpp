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
    int pairSum(ListNode* head) {
        // vector<int> v;
        // while(head!=NULL)
        // {
        //     v.push_back(head->val);
        //     head=head->next;
        // }
        // int n=v.size();
        // int ans=0;
        // for(int i=0;i<n/2;i++)
        // {
        //     int sum=v[i]+v[n-1-i];
        //     ans=max(sum,ans);
        // }
        // return ans;

        ListNode* fast = head;
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* nxt = NULL;
        while(fast != NULL) {
            fast = fast->next->next;
            nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
            
        }
        int mx = 0;
        while(prev && curr) {
            mx = max(mx, prev->val + curr->val);
            prev = prev->next;
            curr = curr->next;
        }
        return mx;
    }
};