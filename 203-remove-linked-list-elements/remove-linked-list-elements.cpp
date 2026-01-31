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
    ListNode* removeElements(ListNode* head, int val) {
        if(!head) return nullptr;
        ListNode* dummy=new ListNode(0);
        ListNode* tail=dummy;
        while(head!=nullptr){
            if(head->val != val){
                tail->next=head;
                tail=head;
            }
            head=head->next;
        }
        tail->next=nullptr;
        return dummy->next;
    }
};