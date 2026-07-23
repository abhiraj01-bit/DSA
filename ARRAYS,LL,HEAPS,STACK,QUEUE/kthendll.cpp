/*gfg
/* Structure of linked list Node
class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
/*class Solution {
  public:
    int getKthFromLast(Node* head, int k) {
        int count=0;
        Node* temp1=head;
        while(temp1!=NULL){
            temp1=temp1->next;
            count++;
        }
        if(count-k==0){
            return head->data;
        }
        if(k>count){
            return -1;
        }
        int idx=count-k;
        Node* temp=head;
        for(int i=1;i<idx;i++){
            temp=temp->next;
        }
        Node* newnode=temp->next;
        return newnode->data;
    }
};*/