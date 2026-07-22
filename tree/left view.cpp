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
    vector<int> leftView(Node *root) {
        // code here
        if(root==NULL){
            return{};
        }
        queue<Node*>q;
        q.push(root);
        vector<int>ans;
        while(!q.empty()){
            vector<int>curr;
            int s=q.size();
            for(int i=0;i<s;i++){
                Node* n=q.front();
                q.pop();
                int p=n->data;
                curr.push_back(p);
                if(n->left){
                    q.push(n->left);
                }
                if(n->right){
                    q.push(n->right);
                }
            }
            int i=curr[0];
            ans.push_back(i);
        }
        return ans;
    }
};*/