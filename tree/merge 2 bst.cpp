/*leetcode
/*
class Node {
  public:
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
  vector<int>arr;
  void inorder(Node* root){
      if(root==NULL){
          return;
      }
      inorder(root->left);
      arr.push_back(root->data);
      inorder(root->right);
  }
    vector<int> merge(Node *root1, Node *root2) {
        // code here
        inorder(root1);
        inorder(root2);
        sort(arr.begin(),arr.end());
        return arr;
    }
};*/