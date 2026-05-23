/*leetcode+gfg
/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int x) {
        data = x;
        left = nullptr;
        right = nullptr;
    }
};
*/
/*class Solution {
  public:
    bool isIdentical(Node* r1, Node* r2) {
        // code here
        queue<pair<Node*,Node*>>q;
        q.push({r1,r2});
        while(!q.empty()){
            auto[n1,n2]=q.front();
            q.pop();
            if(!n1&&!n2){
                continue;
            }
            if(!n1||!n2){
                return false;
            }
            if(n1->data!=n2->data){
                return false;
            }
            q.push({n1->left,n2->left});
            q.push({n1->right,n2->right});
        }
        return true;
    }
};*/