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
        ListNode* prev=nullptr;
        ListNode* curr= head;
        while(curr != nullptr){
            ListNode* next= curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
    int pairSum(ListNode* head) {
        int maxi=INT_MIN;
        ListNode* middle = nullptr;
        ListNode* slow= head;
        ListNode* fast = head;
        while(fast->next != nullptr && fast->next->next != nullptr){
            slow = slow->next;
            fast=fast->next->next;
        }
        middle = slow->next;
        slow->next= nullptr;
        ListNode* reversed=reverselist(middle);
        ListNode* first=head;
        ListNode* second=reversed;
        while(first != nullptr){
            int answer=first->val+second->val;
            if(answer>maxi) maxi = answer;
            first=first->next;
            second=second->next;
        }
        return maxi;
        
    }
};