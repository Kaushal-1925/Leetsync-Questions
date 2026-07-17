class Solution {
public:
    void pre(TreeNode* root, vector<int>& ans) {
        if (root == nullptr)
            return;

        ans.push_back(root->val);   // Root
        pre(root->left, ans);       // Left
        pre(root->right, ans);      // Right
    }

    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        pre(root, ans);
        return ans;
    }
};