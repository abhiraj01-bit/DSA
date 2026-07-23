/*class Solution {
public:

    ListNode* swapPairs(ListNode* head) {

        ListNode* dummy = new ListNode(0);

        dummy->next = head;

        ListNode* prev = dummy;

        while(prev->next != NULL &&
              prev->next->next != NULL){

            ListNode* first = prev->next;

            ListNode* second = first->next;
            first->next = second->next;

            second->next = first;

            prev->next = second;
            prev = first;
        }

        return dummy->next;
    }
};
BY RECURSION 
class Solution {
public:
    void swap(Node* temp, Node* prev) {
        if (temp == NULL || temp->next == NULL)
            return;

        Node* first = temp;
        Node* second = first->next;

        first->next = second->next;
        second->next = first;
        prev->next = second;

        // Recurse for the remaining list
        swap(first->next, first);
    }

    Node* pairwiseSwap(Node* head) {
        if (head == NULL || head->next == NULL)
            return head;

        Node dummy(0);
        dummy.next = head;

        swap(head, &dummy);

        return dummy.next;
    }
};
*/