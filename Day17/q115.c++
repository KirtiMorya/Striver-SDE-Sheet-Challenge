#include <bits/stdc++.h> 
using namespace std;
vector<int> bottomView(BinaryTreeNode<int> * root){
    vector<int>ans;
    if(root==NULL){
        return  ans;
    }
    map<int,int>mp;
    mp[0]=root->data;
    queue<pair<BinaryTreeNode<int>*,int>>q;
    q.push({root,0});
 while(q.empty()==false){
     BinaryTreeNode<int>* node=q.front().first;
     int line=q.front().second;
     q.pop();
     mp[line]=node->data;
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
