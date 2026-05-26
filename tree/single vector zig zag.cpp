/*class Solution {
  public:

    vector<int> zigZagTraversal(Node* root) {

        deque<Node*> dq;

        vector<int> a;

        if(root == NULL){

            return a;
        }

        bool flag = true;

        dq.push_back(root);

        while(!dq.empty()){

            int s = dq.size();

            for(int i=0; i<s; i++){

                if(flag){

                    Node* curr = dq.front();

                    dq.pop_front();

                    a.push_back(curr->data);

                    if(curr->left){

                        dq.push_back(curr->left);
                    }

                    if(curr->right){

                        dq.push_back(curr->right);
                    }
                }

                else{

                    Node* curr = dq.back();

                    dq.pop_back();

                    a.push_back(curr->data);

                    if(curr->right){

                        dq.push_front(curr->right);
                    }

                    if(curr->left){

                        dq.push_front(curr->left);
                    }
                }
            }

            flag = !flag;
        }

        return a;
    }
};*/