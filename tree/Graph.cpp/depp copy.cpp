/*leetcode
class Solution {
public:

    Node* cloneGraph(Node* node) {

        if(node==NULL)
            return NULL;

        unordered_map<Node*,Node*> mp;

        queue<Node*> q;

        mp[node] = new Node(node->val);

        q.push(node);

        while(!q.empty()) {

            Node* curr = q.front();
            q.pop();

            for(Node* nbr : curr->neighbors) {

                if(mp.find(nbr) == mp.end()) {

                    mp[nbr] = new Node(nbr->val);

                    q.push(nbr);
                }

                mp[curr]->neighbors.push_back(mp[nbr]);
            }
        }

        return mp[node];
    }
};*/