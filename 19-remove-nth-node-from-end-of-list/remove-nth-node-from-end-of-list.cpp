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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp=head;
        int i=0;
        while(temp){
            i=i+1;
            temp=temp->next;
        }
        if(i-n==0) return head->next;
        temp=head;
        ListNode* prev=nullptr;
        for(int j=0;j<i-n;j++){
            prev=temp;
            temp=temp->next;
        }
        prev->next=temp->next;
        return head;
    }
};