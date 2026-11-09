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
    int getDecimalValue(ListNode* head) {
        ListNode* temp=head;
        string binary;
        while(temp!=NULL){
            int n=temp->val;
            char c= n + '0';
            binary.push_back(c);
            temp=temp->next;
        }
        int decimal = stoi(binary, nullptr, 2); 
        return decimal;
    }
};*/