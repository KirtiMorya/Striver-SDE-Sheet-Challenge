#include <bits/stdc++.h> 
using namespace std;
/************************************************************

    Following is the Binary Tree node structure:

    class BinaryTreeNode
    {
    public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };


************************************************************/
void postorder(vector<int>&p, BinaryTreeNode<int>*root){
    if(root==NULL){
        return;
    }
    
    postorder(p,root->left);
    postorder(p,root->right);
    p.push_back(root->data);
}
void inorder(vector<int>&ans, BinaryTreeNode<int>*root){
    if(root==NULL){
        return;
    }
    inorder(ans,root->left);
    ans.push_back(root->data);
    inorder(ans,root->right);
}
void preorder(vector<int>&p, BinaryTreeNode<int>*root){
    if(root==NULL){
        return;
    }
    p.push_back(root->data);
    preorder(p,root->left);
    preorder(p,root->right);
}
vector<vector<int>> getTreeTraversal(BinaryTreeNode<int> *root){
   vector<vector<int>>vt; 
    if(root==NULL){
        return vt;
    }
    vector<int>p;
    preorder(p,root);
    vector<int>ans;
    inorder(ans,root);
    vt.push_back(ans);
    vt.push_back(p);
    vector<int>v;
    postorder(v,root);
    vt.push_back(v);
    return vt;
}