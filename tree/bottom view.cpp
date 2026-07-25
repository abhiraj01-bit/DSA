/*class Solution {
public:
    vector<int> bottomView(Node *root) {

        map<int,int> mp;
        queue<pair<Node*,int>> q;

        q.push({root,0});

        while(!q.empty()){

            Node* node = q.front().first;
            int hd = q.front().second;
            q.pop();

            // Always overwrite
            mp[hd] = node->data;

            if(node->left)
                q.push({node->left,hd-1});

            if(node->right)
                q.push({node->right,hd+1});
        }

        vector<int> ans;

        for(auto &x:mp)
            ans.push_back(x.second);

        return ans;
    }
};*/