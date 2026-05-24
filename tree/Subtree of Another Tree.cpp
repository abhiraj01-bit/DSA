/*leetcode
class Solution {
public:
bool identical(TreeNode* root,TreeNode* subRoot){
    queue<pair<TreeNode*,TreeNode*>>q;
    q.push({root,subRoot});
    while(!q.empty()){
        auto[n1,n2]=q.front();
        q.pop();
        if(!n1&&!n2){
            continue;
        }
        if(!n1||!n2){
            return false;
        }
        if(n1->val!=n2->val){
            return false;
        }
        q.push({n1->left,n2->left});
        q.push({n1->right,n2->right});
    }
    return true;
}
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root==NULL||subRoot==NULL){
            return root==subRoot;
        }
        if(root->val==subRoot->val){
            if(identical(root,subRoot)){
                return true;
            }
        }
        return isSubtree(root->left,subRoot)||isSubtree(root->right,subRoot);
    }
};*/