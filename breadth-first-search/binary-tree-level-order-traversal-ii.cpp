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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
            if(root == NULL) return {};
      vector<vector<int>> result;
      queue<TreeNode*> q;
      q.push(root);
      TreeNode* dumb;
      int len;
        while(!q.empty()){
            len = q.size();
            vector <int> r;
            for( int i = 0; i < len; i++){
                dumb = q.front();
                q.pop();
                r.push_back(dumb -> val);

                if(dumb -> left) q.push(dumb -> left);
                if(dumb -> right) q.push(dumb -> right);
            }
            result.push_back(r);
            
        }
        reverse(result.begin(), result.end());
        return result;
    }
};