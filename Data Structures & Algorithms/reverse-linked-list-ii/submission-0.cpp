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
    ListNode* reverseBetween(ListNode* head, int l, int r) {
        if(!head||r==l)return head;


ListNode dummy(0,head);
ListNode* prev=&dummy;

        for(int i=0;i<l-1;i++)
        prev=prev->next;


        ListNode * curr=prev->next;
        for(int i=0;i<r-l;i++){
            ListNode* temp=curr->next;
            curr->next=temp->next;
            temp->next=prev->next;
            prev->next=temp;

        }
        return dummy.next;
    }
};