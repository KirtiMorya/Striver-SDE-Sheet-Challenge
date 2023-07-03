#include <bits/stdc++.h> 
/************************************************************

Following is the Binary Tree node class
    
template <typename T = int>
class TreeNode
{
public:
    T data;
    TreeNode<T> *left;
    TreeNode<T> *right;

    TreeNode(T val)
    {
        this->data = val;
        left = NULL;
        right = NULL;
    }

    ~TreeNode()
    {
        if (left != NULL)
        {
            delete left;
        }
        if (right != NULL)
        {
            delete right;
        }
    }
};

************************************************************/

vector<int> verticalOrderTraversal(TreeNode<int> *root) {
  vector<int> ans;
  map<int, map<int, vector<int>>> mp;
  queue<pair<TreeNode<int> *, pair<int, int>>> q;
  q.push({root, {0, 0}});
 // mp[0][0].push_back(root->data);
  while (q.empty()==false) {
    auto it = q.front();
    q.pop();
    TreeNode<int> *node = it.first;
    int v = it.second.first;
    int l = it.second.second;
    mp[v][l].push_back(node->data);
    if (node->left != NULL) {
      q.push({node->left, {v - 1, l + 1}});
    }
    if (node->right != NULL) {
      q.push({node->right, {v + 1, l + 1}});
    }
    }
    for(auto it:mp){
        for(auto i:it.second){
            for(auto k:i.second){
                ans.push_back(k);
            }
        }
    }
    return ans;
}