/*gfg linklist slowfast
/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = nullptr;
  }
};
*/

// Function to insert a node in the middle of the linked list.
/*class Solution {
  public:
    Node *insertInMiddle(Node *head, int x) {
        if(head == NULL){
            return new Node(x);
        }
        Node* slow=head;
        Node* fast=head->next;
        while(fast!=NULL&&fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        Node* newnode= new Node(x);
        newnode->next=slow->next;
        slow->next=newnode;
        return head;
    }
};
*/