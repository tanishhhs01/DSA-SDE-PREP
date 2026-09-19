class Solution {
public:
    int findLengthOfLoop(ListNode *head) {
        ListNode* fast = head;
        ListNode* slow = head;
        while(fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
            if(fast == slow) {
               int cnt = 1;
               fast = fast->next;
               while(slow != fast) {
               cnt++;
               fast = fast->next;  
        } 
        return cnt; 
            }
        }
        
       return 0;
    }
};