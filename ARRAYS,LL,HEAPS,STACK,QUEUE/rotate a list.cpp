/*/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
/*class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
       if(head==NULL||head->next==NULL){
        return head;
       }
       int l=1;
        ListNode* tail=head;
        while(tail->next!=NULL){
            l++;
            tail=tail->next;
        }
       k=k%l;
       int n=l-k-1;
       ListNode* curr=head;
       while(n>0){
        curr=curr->next;
        n--;
       }
       tail->next=head;
       head=curr->next;
       curr->next=NULL;
       return head;
    }
};*/