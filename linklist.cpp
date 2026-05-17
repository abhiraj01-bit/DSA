#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int n,node* next){
        this->data=n;
        this->next=next;
    }
};
int main(){
    node* node1=new node(10,NULL);
    node* node2=new node(20,NULL);
    node1->next=node2;
    while(node1!=NULL){
        cout<<node1->data<<endl;
        node1=node1->next;
    }
}