/**
 The code constructs the tree in a balanced manner because it chooses the middle element of 
 the given range as the root at each step. Since the input array is sorted, this ensures 
 that the elements are divided equally between the left and right subtrees, resulting in a height-balanced BST.
 */
class Solution {
public:
    TreeNode* fun(vector<int>& nums,int l,int h)
    {
        int m = (l+h)/2;
        TreeNode* node = NULL;

        if(l<=h)
        {
             node = new TreeNode(nums[m]);
            node->left = fun(nums,l,m-1);
            node->right = fun(nums,m+1,h);
        }

        return node;

    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return fun(nums,0,nums.size()-1);
    }
};
