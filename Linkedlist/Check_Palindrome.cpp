class Solution {
public:
    ListNode* reverseLL(ListNode* head) {
       if(head == NULL || head->next == NULL) return head;
        ListNode* newhead = reverseLL(head->next);
        ListNode* front = head->next;
        front->next = head;
        head->next = NULL;
        return newhead;
    }
    bool isPalindrome(ListNode* head) {
        ListNode* fast=head;
        ListNode* slow = head;
       
        while(fast->next != NULL && fast->next->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }
         ListNode* newhead = reverseLL(slow->next);
        ListNode* first = head;
        ListNode* second = newhead;
        while(second) {
            if(first->val != second->val) {
                reverseLL(newhead);
                return false;
            }
            second=second->next;
            first=first->next;
            
        }
        reverseLL(newhead);
        return true;
    }
};