/*gfg
/*
class Node {
public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};
*/
/*class Solution {
  public:
    Node* deleteNode(Node* head, int x) {
        if(x==1){
            Node* temp=head;
            head=head->next;
            delete temp;
            return head;
        }
        Node*temp=head;
        for(int i=1;i<x-1;i++){
            temp=temp->next;
        }
        Node* newnode=temp->next;
        temp->next=temp->next->next;
        delete newnode;
        return head;
    }
};*/