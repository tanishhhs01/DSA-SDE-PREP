class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int k = 0;
        ListNode* temp = head;

        while (temp) {
            temp = temp->next;
            k++;
        }

        ListNode* temp1 = head;
        int cnt = 1;

        while (cnt < k / 2 + 1) {
            temp1 = temp1->next;
            cnt++;
        }

        return temp1;
    }
};