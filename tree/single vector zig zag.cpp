/*gfg
class Solution {
public:

    vector<int> zigZagTraversal(Node* root) {

        vector<int> ans;

        if(root == NULL){

            return ans;
        }

        queue<Node*> q;

        q.push(root);

        bool leftToRight = true;

        while(!q.empty()){

            int s = q.size();

            deque<int> dq;

            for(int i=0; i<s; i++){

                Node* curr = q.front();

                q.pop();

                if(leftToRight){

                    dq.push_back(curr->data);
                }
                else{

                    dq.push_front(curr->data);
                }

                if(curr->left){

                    q.push(curr->left);
                }

                if(curr->right){

                    q.push(curr->right);
                }
            }

            for(auto x : dq){

                ans.push_back(x);
            }

            leftToRight = !leftToRight;
        }

        return ans;
    }
};*/