/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        unordered_map<ListNode*,int> mp;
        int i=0;
        if(head==nullptr) return nullptr;
        while(head->next!=nullptr  && !mp.contains(head)){
            mp[head]=i++;
            head=head->next;
        }
        if(head->next==nullptr) return nullptr;
        return head;
    }
};