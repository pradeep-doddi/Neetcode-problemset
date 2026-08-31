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
        while(head && head->val==val){
            head=head->next;
        }
        if(head==nullptr) return nullptr;
        ListNode* temp=head;
        while(temp->next){
            ListNode* nextp=temp->next;
            if(nextp->val==val){
                temp->next=nextp->next;
            }
            else
                temp=temp->next;
        }
        return head;
    }
};