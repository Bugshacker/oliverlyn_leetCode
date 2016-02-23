/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
/*
*@oliverlyn: 2016-2-23
*/
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        //root为NUL
        if(!root)
            return NULL;
        //root没有左右子树
        if(!root->left && !root->right)
            return root;
        //倒置左右子树
        TreeNode* invRL = root->left;
        root->left = invertTree(root->right);
        root->right = invertTree(invRL);
    /*
        
        //TreeNode* invertLeft, invertRight;
        if(root->left) {
            //invertLeft = invertTree(root->left);
            root->right = invertTree(root->left);
        } else {
            //invertLeft = NULL;
            root->right =NULL;
        }
        if(root->right) {
            //invertRight = invertTree(root->right);
            root->left = invertTree(root->right);
        } else {
            //invertRight = NULL;
            root->left = NULL;
        }
        
        //root->left = inverRight;
        //root->right = invertLeft;
        if(root->left && root->right) {
            root->left = invertTree(root->right);
            root->right = invertTree(root->left);
            
        }
    */
        return root;
    }
};
