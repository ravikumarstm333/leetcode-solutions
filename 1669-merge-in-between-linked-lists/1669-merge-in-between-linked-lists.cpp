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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        int i=1;
        ListNode* res=list1;
        while(i!=a){
            list1=list1->next;
            i++;
        }
        ListNode* nextNodes=list1->next;
        list1->next=list2;
        while(list2->next!=nullptr){
            list2=list2->next;
        }
        int move=b-a+1;
        while(move!=0){
            nextNodes=nextNodes->next;
            move--;
        }
        list2->next=nextNodes;
        return res;


    }
};