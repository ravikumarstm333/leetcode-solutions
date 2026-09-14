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
        int n=0;
        ListNode* size=head;
        while(size!=nullptr){
            n++;
            size=size->next;
        }
        if(n == 0) return nullptr;
        int R = k % n;
        if(R==0)return head;
        ListNode* dummy=head;
        ListNode* right=new ListNode(0);
        ListNode* left=head;
        int i=1;
        while(i!=n-R){
            dummy=dummy->next;;
            i++;
        }
          
        right->next = dummy->next;
        dummy->next = nullptr;
            
        ListNode* res=right->next;
        while(right->next!=nullptr){
            right=right->next;
        }
        right->next=left;
        return res;
        
    }
};