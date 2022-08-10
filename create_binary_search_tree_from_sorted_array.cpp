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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if(nums.size()==0) return NULL;
        return TreefromArray(nums,0,nums.size()-1);
    }
public:
    TreeNode* TreefromArray(vector<int>& nums,int l,int r)
     {
        if(l>r) return NULL;
        int mid=l+(r-l)/2;
        TreeNode* n=new TreeNode(nums[mid]);
        n->left= TreefromArray(nums,l,mid-1);
        n->right= TreefromArray(nums,mid+1,r);
        return n;
     }
   
};