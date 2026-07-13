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
    int pairSum(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL&&fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* curr=slow;
        ListNode* prev=NULL;
        ListNode* n=NULL;
        while(curr!=NULL){
            n=curr->next;
            curr->next=prev;
            prev=curr;
            curr=n;
        }
        ListNode* t1=head;
        ListNode* t2=prev;
        int ans=0;
        while(t2!=NULL){
            ans=max(ans,t1->val+t2->val);
            t1=t1->next;
            t2=t2->next;
        }
        return ans;
    }
};*/