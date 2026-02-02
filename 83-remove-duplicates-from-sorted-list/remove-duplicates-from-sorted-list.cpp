class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (!head) return nullptr;

        ListNode* curr = head;

        while (curr->next != nullptr) {
            if (curr->val == curr->next->val) {
                curr->next = curr->next->next; // ✅ remove duplicate
            } else {
                curr = curr->next;             // move forward
            }
        }

        return head;
    }
};
