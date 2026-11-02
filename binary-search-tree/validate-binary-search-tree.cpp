/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isValidBST(TreeNode* root) {
        long long minval = LLONG_MIN, maxval = LLONG_MAX;
        return isvalid(root, minval, maxval);
    }
    bool isvalid(TreeNode* root, long long minval, long long maxval){
        if(!root) return true;
        if(root -> val <= minval || root -> val >= maxval)
        return false;
        return isvalid( root -> left, minval, root -> val) && isvalid(root -> right, root -> val, maxval);
    }
    
};