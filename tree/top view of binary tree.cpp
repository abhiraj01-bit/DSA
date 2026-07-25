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
    vector<int> topView(Node *root){
        // code here
       queue<pair<Node*,int>>q;
       map<int,int>mp;
       q.push({root,0});
       while(!q.empty()){
           Node* n=q.front().first;
           int p=q.front().second;
           q.pop();
           if(mp.find(p)==mp.end()){
               mp[p]=n->data;
           }
           if(n->left){
               q.push({n->left,p-1});
           }
           if(n->right){
               q.push({n->right,p+1});
           }
       }
       vector<int>ans;
       for(auto e:mp){
           ans.push_back(e.second);
       }
       return ans;
    }
};*/