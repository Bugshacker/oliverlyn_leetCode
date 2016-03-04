/**
 * Definition of TreeNode:
 * class TreeNode {
 * public:
 *     int val;
 *     TreeNode *left, *right;
 *     TreeNode(int val) {
 *         this->val = val;
 *         this->left = this->right = NULL;
 *     }
 * }
 */
class Solution {
public:
    /**
     * @param root: The root of the binary search tree.
     * @param A and B: two nodes in a Binary.
     * @return: Return the least common ancestor(LCA) of the two nodes.
     */
    bool FindNode(TreeNode* root, TreeNode* node) {
        if(root == NULL || node == NULL){
            return false;
        } else {
            if(root == node){
                return true;
            }
        }
        bool found;
        found = FindNode(root->left, node);
        if(!found){
          found = FindNode(root->right, node);
        }
        return found;
    }
    TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *A, TreeNode *B) {
        // write your code here
        if(root == A && root == B){
            return root;
        }
        if(FindNode(A, B)){
            return A;
        }
        if(FindNode(B, A)){
            return B;
        }
        if(FindNode(root->left, A)){
            if(FindNode(root->right, B)){
                return root;
            } else {
                return lowestCommonAncestor(root->left, A, B);
            }
        } else{
            if(FindNode(root->left, B)){
                return root;
            } else{
                return lowestCommonAncestor(root->right, A, B);
            }
        }
    }
};
