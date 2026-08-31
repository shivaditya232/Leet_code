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
    ListNode* oddEvenList(ListNode* head) {
        ListNode* oddPointer=head;
        if(head==nullptr){
            return head;
        }
        if(head->next==nullptr){
            return head;
        }
        ListNode* evenHead=head->next;
        ListNode* evenPointer=head->next;
        while(oddPointer && oddPointer->next && evenPointer && evenPointer->next){
            oddPointer->next=oddPointer->next->next;
            evenPointer->next=evenPointer->next->next;
            oddPointer=oddPointer->next;
            evenPointer=evenPointer->next;
        }
        
        oddPointer->next=evenHead;
        return head;
    }
};