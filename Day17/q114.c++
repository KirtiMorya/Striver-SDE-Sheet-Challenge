#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure
    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };
************************************************************/
void helper(vector<int>&ans, TreeNode<int>*root,int level){
    if(root==NULL){
        return ;
    }
    if(ans.size()==level){
        ans.push_back(root->data);
    }
    helper(ans,root->left,level+1);
    helper(ans,root->right,level+1);
}
vector<int> getLeftView(TreeNode<int> *root)
{
    //    Write your code here
    vector<int>ans;
    helper(ans,root,0);
    return ans;
}