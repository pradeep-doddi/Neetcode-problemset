class Solution {
public:
    ListNode* reverse(ListNode* head){
        ListNode* curr = head;
        ListNode* prev = nullptr;

        while(curr){
            ListNode* nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
        }
        return prev;
    }

    ListNode* removeNodes(ListNode* head) {

        if(head == nullptr || head->next == nullptr)
            return head;

        head = reverse(head);

        int maxi = head->val;
        ListNode* curr = head;

        while(curr->next){
            if(curr->next->val < maxi){
                // delete smaller node
                curr->next = curr->next->next;
            } 
            else{
                curr = curr->next;
                maxi = curr->val;
            }
        }

        return reverse(head);
    }
};
