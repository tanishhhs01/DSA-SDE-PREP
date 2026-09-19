class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* fast = head;
        ListNode* slow = head; 
        while(fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
            if(fast == slow) {
              break;
            }
        }
        if(!fast || !fast->next) return nullptr;
        slow = head;
        while(fast != slow) {
            slow = slow->next;
            fast = fast->next;
        }
        return slow;
    }
};