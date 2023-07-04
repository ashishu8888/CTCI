
  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
 
class Solution {
public:
    int ans = 0;
    void dfs(TreeNode* root,long long x, int t)
    {
        if(!root) return ;

        x += root->val;

        if(x == t)
        {
            ans++;
        }

        dfs(root->left, x,t);
        dfs(root->right,x,t);

    }
    void fun(TreeNode* root, int t)
    {
        if(!root) return ;
        long long x = 0;
        dfs(root,x,t);
        fun(root->left,t);
        fun(root->right,t);
    }
    int pathSum(TreeNode* root, int t) {
        fun(root,t);
        return ans;
        
    }
};