/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        ListNode result=new ListNode();
        ListNode resultHead=result;
        int firstSum=l1.val+l2.val;
        int caryy=-1;
        if(firstSum>9){
            int d=firstSum%10;
            result.val=d;
            caryy=firstSum/10;
        }else{
            result.val=firstSum;
        }
        l1=l1.next;
        l2=l2.next;
        while(l1!=null || l2!=null){
            if(l1!=null && l2!=null){
                int sumNode=l1.val+l2.val;
                if(caryy>-1){
                    sumNode+=caryy;
                    caryy=-1;
                }
                if(sumNode>9){
                    int digit=sumNode%10;
                    caryy=sumNode/10;
                    ListNode newNode=new ListNode(digit);
                    result.next=newNode;
                    result=result.next;
                }else{
                    ListNode newNode=new ListNode(sumNode);
                    result.next=newNode;
                    result=result.next;
                }
                l1=l1.next;
                l2=l2.next;
            }
            else if(l1!=null && l2==null){
                int sumNode=l1.val;
                if(caryy>-1){
                    sumNode+=caryy;
                    caryy=-1;
                }
                if(sumNode>9){
                    int digit=sumNode%10;
                    caryy=sumNode/10;
                    ListNode newNode=new ListNode(digit);
                    result.next=newNode;
                    result=result.next;
                }else{
                    ListNode newNode=new ListNode(sumNode);
                    result.next=newNode;
                    result=result.next;
                }
                l1=l1.next;
                
            }
            else if(l1==null && l2!=null){
                int sumNode=l2.val;
                if(caryy>-1){
                    sumNode+=caryy;
                    caryy=-1;
                }
                if(sumNode>9){
                    int digit=sumNode%10;
                    caryy=sumNode/10;
                    ListNode newNode=new ListNode(digit);
                    result.next=newNode;
                    result=result.next;
                }else{
                    ListNode newNode=new ListNode(sumNode);
                    result.next=newNode;
                    result=result.next;
                }
                l2=l2.next;
            }
        }
        if(caryy>-1){
            ListNode newNode=new ListNode(caryy);
            result.next=newNode;
            result=result.next;
        }
        return resultHead;
    }
}