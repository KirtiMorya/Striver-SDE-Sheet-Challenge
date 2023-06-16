#include <bits/stdc++.h> 
using namespace std;
void solve(int i, int j,vector<vector<int>>&mz, vector<vector<int>>&vis,vector<vector<int>>&ans,int n){
  if(i==n-1 && j==n-1){
    vector<int>temp;
    vis[i][j]=1;
    for(int i=0; i<n; i++){
      for(int j=0; j<n; j++){
        temp.push_back(vis[i][j]);
      }
    }
    vis[i][j]=0;
    ans.push_back(temp);
    return;
  }
  if(i>=n || j>=n || i<0 || j<0 || mz[i][j]==0 || vis[i][j]==1){
    return ;
  }
  vis[i][j]=1;
  solve(i+1,j,mz,vis,ans,n);
  solve(i-1,j,mz,vis,ans,n);
  solve(i,j+1,mz,vis,ans,n);
  solve(i,j-1,mz,vis,ans,n);
  vis[i][j]=0;
}
vector<vector<int> > ratInAMaze(vector<vector<int> > &mz, int n){
    vector<vector<int>>vis(n,vector<int>(n,0));
    vector<vector<int>>ans;
    if(mz[0][0]==0){
      
     return ans;
    }
    solve(0,0,mz,vis,ans,n);
    return ans;
}