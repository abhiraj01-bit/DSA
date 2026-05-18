/* gfg
class Solution {
  public:
    void removeLoop(Node* head) {

        Node* slow = head;
        Node* fast = head;

        while(fast != NULL && fast->next != NULL){

            slow = slow->next;

            fast = fast->next->next;

            if(slow == fast){

                fast = head;

                while(slow != fast){

                    slow = slow->next;

                    fast = fast->next;
                }

                // slow = loop starting node

                Node* temp = slow;

                while(temp->next != slow){

                    temp = temp->next;
                }

                temp->next = NULL;

                return;
            }
        }
    }
};*/