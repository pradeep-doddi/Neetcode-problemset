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
    ListNode* reversel(ListNode* head){
        ListNode*prev=nullptr;
        ListNode*curr=head;
        while(curr){
            ListNode*next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1=reversel(l1);
        l2=reversel(l2);
        ListNode*dummy=new ListNode(0);
        ListNode*tail=dummy;
        int sum=0,carry=0;
        while(l1 || l2 || carry){
            sum=carry;
            if(l1){
                sum += l1->val;
                l1=l1->next;
            }
            if(l2){
                sum+=l2->val;
                l2=l2->next;
            }
            int num=sum%10;
            carry=sum/10;
            ListNode* temp = new ListNode(num);
            tail->next=temp;
            tail=temp;
        }
        return reversel(dummy->next);
    }
};