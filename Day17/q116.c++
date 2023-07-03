#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure:

    template <typename T>
    class TreeNode {
       public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

vector<int> getTopView(TreeNode<int> *root) {
    queue<pair<TreeNode<int>*,int>>q;
    map<int,int>mp;
    vector<int>ans;
    if(root==NULL){
        return ans;
    }
    mp[0]=root->val;
    q.push({root,0});
    while(q.empty()==false){
        auto it=q.front();
        q.pop();
        TreeNode<int>*node=it.first;
        int line=it.second;
        if(mp[line]==0){
            mp[line]=node->val;
        }
        if(node->left!=NULL){
            q.push({node->left,line-1});
        }
        if(node->right!=NULL){
            q.push({node->right,line+1});
        }
    }
    for(auto it:mp){
        ans.push_back(it.second);
    }
    return ans;
}