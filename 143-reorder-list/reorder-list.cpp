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
    ListNode* reverselist(ListNode* head){
        ListNode*curr=head;
        ListNode* prev =nullptr;
        while(curr != nullptr){
            ListNode* nxt=curr->next;
            curr->next=prev;
            prev=curr;
            curr= nxt;
        }
        return prev;
    }
    void reorderList(ListNode* head) {
        ListNode* middle = nullptr;
        ListNode*temp=head;
        ListNode* fast = head;
        ListNode* slow = head;
        while(fast != nullptr && fast->next != nullptr){
            slow=slow->next;
            fast = fast->next->next;
        }
        middle = slow->next;
        slow->next=nullptr;
        middle = reverselist(middle);
                while (middle != nullptr) {   // only middle needs to be checked
            ListNode* tempnext = temp->next;       // save next of first half
            ListNode* middlenext = middle->next;   // save next of second half

            temp->next = middle;       // link first -> second
            middle->next = tempnext;  // link second -> next of first  ✅ FIXED

            temp = tempnext;          // move first pointer
            middle = middlenext;      // move second pointer
        }

    }
};