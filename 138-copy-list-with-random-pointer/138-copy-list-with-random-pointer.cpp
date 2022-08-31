/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
         if(!head)return head;
        
        map<Node*, Node*> mp;
        Node* h1, *it, *it2;
        it2 = head;
        
        h1 = new Node(it2->val);
        it2 = it2->next;
        it = h1;
        mp[head] = h1;
        
        while(it2){
            
            it->next = new Node(it2->val);
            it = it->next;
            mp[it2] = it;
            it2 = it2->next;
            
        }
        
        it = h1;
        it2= head;
        while(it2){
            it->random = mp[it2->random];
            it = it->next;
            it2 = it2->next;
        }
        
        return h1;
    }
};