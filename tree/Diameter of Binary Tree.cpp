/*/*
Definition for Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

/*class Solution {
  public:
  int solve(Node* root){
      if(root==NULL){
          return 0;
      }
      int left=solve(root->left);
      int right=solve(root->right);
      return max(left,right)+1;
  }
    int diameter(Node* root) {
        // code here
        if(root==NULL){
            return 0;
        }
        int l=diameter(root->left);
        int r=diameter(root->right);
        int curr=solve(root->left)+solve(root->right);
        return max(curr,max(l,r));
    }
};*/