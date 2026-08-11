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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        if(head==nullptr || nums.size()==0) return head;
        unordered_map<int,int> mp;
        for(int x:nums){
            mp[x]++;
        }
        ListNode* dummy=new ListNode(0);
        ListNode* dummyHead=dummy;
        dummy->next=head;
        while(dummy->next!=nullptr){
            if(mp[dummy->next->val]==1){
                dummy->next=dummy->next->next;
            }else{
                dummy=dummy->next;
            }

        }
        return dummyHead->next;
        
    }
};