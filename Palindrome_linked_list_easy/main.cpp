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
    bool isPalindrome(ListNode* head) {
        ListNode* middle=findMiddle(head);
        reverseSecondHalf(middle);
        ListNode* fast=head;
        ListNode* slow=middle->next;
        while(slow){
            if(slow->val!=fast->val){
                return false;
            }
            slow=slow->next;
            fast=fast->next;
        }
        return true;
    }
    ListNode* findMiddle(ListNode* head){
        ListNode* slow=head;
        ListNode* fast=head->next;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
    void reverseSecondHalf(ListNode* middle){

        ListNode* prev=nullptr;
        ListNode* temp=middle->next;
        while(temp){
            ListNode* curr=temp;
            ListNode* next=temp->next;
            temp->next=prev;
            prev=curr;
            temp=next;
        }
        middle->next=prev;
    }
    
};