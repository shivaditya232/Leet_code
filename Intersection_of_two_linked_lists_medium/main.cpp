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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* head1=headA;
        ListNode* head2=headB;
        while(head1!=head2){
            if(head1==nullptr){
                head1=headB;
            }
            if(head2==nullptr){
                head2=headA;
            }
            head1=head1->next;
            head2=head2->next;
            
        }
        return head1;
    }
};