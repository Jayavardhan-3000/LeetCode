/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if (root == NULL)
            return {};
        vector<vector<int>> result;
        int c = 0;
        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {

            int size = q.size();
            vector<int> list(size);
            for (int i = 0; i < size; i++) {
                struct TreeNode* dumb = q.front();
                q.pop();
                int index = (c == 0) ? i : size - 1 - i;
                list[index] = dumb->val;
                if (dumb->left)
                    q.push(dumb->left);
                if (dumb->right)
                    q.push(dumb->right);
            }
            result.push_back(list);
            c = 1 - c;
        }
        return result;
    }
};