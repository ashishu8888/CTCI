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
    int lst = INT_MIN;
    bool d = true;
    bool fun(TreeNode* root)
    {
        if(!root)
        {
            return true;
        }

        bool a = fun(root->left);
        if(d)
        {
            lst = root->val;
            d = !d;
        }
        else if(lst >= root->val)
        {
            return false;
        }
        else{
            lst = root->val;
        }

        bool b =  fun(root->right);

        return a and b;


    }
    bool isValidBST(TreeNode* root) {
        return fun(root);
    }
};
