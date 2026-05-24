/*
class Solution {
public:

    TreeNode* parent(TreeNode* root, int a){

        if(root == NULL){

            return NULL;
        }

        // if current node is parent of target
        if((root->left && root->left->val == a) ||
           (root->right && root->right->val == a)){

            return root;
        }

        TreeNode* sl = parent(root->left,a);

        if(sl != NULL){

            return sl;
        }

        TreeNode* sr = parent(root->right,a);

        if(sr != NULL){

            return sr;
        }

        return NULL;
    }

    int depth(TreeNode* root, int a){

        if(root == NULL){

            return 0;
        }

        if(root->val == a){

            return 1;
        }

        int sl = depth(root->left,a);

        if(sl != 0){

            return sl + 1;
        }

        int sr = depth(root->right,a);

        if(sr != 0){

            return sr + 1;
        }

        return 0;
    }

    bool isCousins(TreeNode* root, int x, int y) {

        int l = depth(root,x);

        int r = depth(root,y);

        TreeNode* px = parent(root,x);

        TreeNode* py = parent(root,y);

        if(l == r && px != py){

            return true;
        }

        return false;
    }
};*/