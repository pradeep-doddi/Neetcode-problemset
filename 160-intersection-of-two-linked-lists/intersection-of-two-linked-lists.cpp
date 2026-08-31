/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    int getlen(ListNode* head){
        ListNode* temp=head;
        int len=0;
        while(temp){
            len++;
            temp=temp->next;
        }
        return len;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int lena=getlen(headA);
        int lenb=getlen(headB);
        while(lena>lenb){
            headA=headA->next;
            lena--;
        }
        while(lenb>lena){
            headB=headB->next;
            lenb--;
        }
        while(headA != headB){
            headA=headA->next;
            headB=headB->next;
        }
        return headA;
    }
};