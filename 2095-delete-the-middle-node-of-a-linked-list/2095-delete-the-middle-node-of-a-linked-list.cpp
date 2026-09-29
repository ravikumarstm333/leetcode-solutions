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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* dummy=new ListNode(0);
        dummy->next=head;
        if(head->next==nullptr) return nullptr;
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* storPreNode=nullptr;
        while(fast->next!=nullptr && fast->next->next!=nullptr){
            storPreNode=slow;
            slow=slow->next;
            fast = fast->next->next;
        }
        if(fast->next!=nullptr){
            
            ListNode* right = slow->next->next;
            slow->next=right;
        }else{
            storPreNode->next=storPreNode->next->next;
        }
        return dummy->next;
        


        
    }
};