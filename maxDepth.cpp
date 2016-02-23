/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
/**
*
*@Oliverlyn:2016-2-23
*
**/
class Solution {
public:
    int maxDepth(TreeNode* root) {
        //判断root是否为NULL
        if(!root)
            return 0;
        //判断树是否仅有根
        if(!root->left && !root->right)
            return 1;
            
        int lDepth, rDepth;
        //if(!root->left)
        if(root->left){//左子树
            lDepth = maxDepth(root->left);
        } else {
            lDepth = 0;
        }
        if(root->right){//右子树
            rDepth = maxDepth(root->right);
        } else {
            rDepth = 0;
        }
        
        return (lDepth > rDepth) ? lDepth+1 : rDepth+1;
    }
};
