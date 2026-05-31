/*gfg
/*
Tree Node
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

/*class Solution {
  public:
    // Function to find the least absolute difference between any node
    // value of the BST and the given integer.
    priority_queue<int,vector<int>,greater<int>>pq;
    void preorder(Node* root,int K, priority_queue<int,vector<int>,greater<int>>&pq){
        if(root==NULL){
            return ;
        }
        int n=abs(K-root->data);
        pq.push(n);
        minDiff(root->left,K);
        minDiff(root->right,K);
    }
    int minDiff(Node *root, int K) {
        // Your code here
        preorder(root,K,pq);
        
        return pq.top();
    }
};*/