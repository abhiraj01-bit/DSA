/*/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

/*class Solution {
  public:
  Node* bst(vector<int>&arr,int st,int end){
      if(st>end){
          return NULL;
      }
      int mid=st+(end-st)/2;
      Node* root=new Node(arr[mid]);
      root->left=bst(arr,st,mid-1);
      root->right=bst(arr,mid+1,end);
      return root;
  }
    Node* sortedArrayToBST(vector<int>& arr) {
        // code here
        int st=0;
        int end=arr.size()-1;
        bst(arr,st,end);
    }
};*/