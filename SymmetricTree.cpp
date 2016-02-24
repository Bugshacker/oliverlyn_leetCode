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
*@Oliverlyn:2016-2-24
**/
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if(!root) //root为NULL
            return true;
        else {
            if(!root->left && !root->right)//root存在但没有左右子树
                return true;
            else if(!root->left || !root->right)//root存在但只有左右子树之一
                return false;
            else //root存在且左右子树都存在
                return isAntiTree(root->left, root->right);
                
        }
        
    }
    bool isAntiTree(TreeNode* p, TreeNode* q){//判断左右子树是否为反对称的函数，类似与Same tree的算法
         if(!p && !q)
            return true;
        else if((!p&&q) || (!q && p))
            return false;
        else{
            if(p->val != q->val)
                return false;
            else {
                return isAntiTree(p->left, q->right) && isAntiTree(p->right, q->left);
            }
        }
       
    }
};
