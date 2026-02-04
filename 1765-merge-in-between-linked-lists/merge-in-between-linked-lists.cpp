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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        int count=1;
        ListNode* curr=list1;
        ListNode* nxt=list1;
        while(count != a){
            count=count+1;
            curr=curr->next;
        }
        count=0;
        while(count != b){
            count = count+1;
            nxt=nxt->next;
        }
        ListNode* temp=list2;
        while(temp->next !=nullptr){
            temp=temp->next;
        }
        curr->next=list2;
        temp->next=nxt->next;
        return list1;        

    }
};