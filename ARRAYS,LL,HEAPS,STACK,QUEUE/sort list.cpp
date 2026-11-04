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
    ListNode* sortList(ListNode* head) {
        vector<int>ans;
        ListNode* temp=head;
        while(temp!=NULL){
            int n=temp->val;
            ans.push_back(n);
            temp=temp->next;
        }
        sort(ans.begin(),ans.end());
        int i=0;
        ListNode* again=head;
        while(again!=NULL){
            int n=ans[i];
            i++;
            again->val=n;
            again=again->next;
        }
        return head;
    }
};*/