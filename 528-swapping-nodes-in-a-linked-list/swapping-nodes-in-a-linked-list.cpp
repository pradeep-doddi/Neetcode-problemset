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
    ListNode* swapNodes(ListNode* head, int k) {
       ListNode* tail=nullptr;
       ListNode* curr=head;
       for(int i=0;i<k-1;i++){
        curr=curr->next;
       } 
       int size=0;
       ListNode* temp=head;
       while(temp!=nullptr){
        size += 1;
        temp=temp->next; 
       }
       temp=head;
       for(int i=0;i<size-k;i++){
            temp=temp->next;
       }
       swap(temp->val,curr->val);
    return head;

    }
};