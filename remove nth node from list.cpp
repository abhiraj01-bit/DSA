/*class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (head == NULL || head->next == NULL) {
            return NULL;
        }
        ListNode* temp = head;
        int count = 0;
        while (temp != NULL) {
            count++;
            temp = temp->next;
        }
        if (count == n) {
            ListNode* del = head;
            head = head->next;
            delete del;
            return head;
        }
        int pos = count - n;
        ListNode* prev = NULL;
        ListNode* curr = head;
        for (int i = 0; i < pos; i++) {
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;
        delete curr;

        return head;
    }
};*/