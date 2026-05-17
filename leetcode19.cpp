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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count=0;
        ListNode*temp1=head;
        while(temp1!=NULL){
            temp1=temp1->next;
            count++;
        }
        if(count==n){
                 ListNode*temp=head;
                 head=head->next;
                 delete temp;
                 return head;
            }
        int idx=count-n;
         ListNode*temp=head;
        for(int i=1;i<idx;i++){
            temp=temp->next;
        }
        ListNode* newnode=temp->next;
        temp->next=temp->next->next;
        delete newnode;
        return head;
    }
};*/