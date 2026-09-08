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
    ListNode* partition(ListNode* head, int x) {
        ListNode* leftNodes=new ListNode(-1);
        ListNode* res=leftNodes;
        ListNode* dummy=new ListNode(-1);
        dummy->next=head;
        ListNode* rightNodes=dummy;
        while(dummy->next!=nullptr){
            if(dummy->next->val<x){
                leftNodes->next=new ListNode(dummy->next->val);
                leftNodes=leftNodes->next;
                if(dummy->next->next!=nullptr){
                    dummy->next=dummy->next->next;
                }
                else if(dummy->next->next==nullptr){
                    dummy->next=nullptr;
                }
            }
            else dummy=dummy->next;
        }
        if(rightNodes->next==nullptr){
            return res->next;
        }
        if(res->next==nullptr){
            return rightNodes->next;
        }

        while(leftNodes->next!=nullptr){
            leftNodes=leftNodes->next;
        }
        leftNodes->next=rightNodes->next;
        return res->next;

        
    }
};