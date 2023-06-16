#include <bits/stdc++.h> 
bool isSafe(int node,vector<vector<int>>&mat, int m ,int n,vector<int>&color,int c){
    for(int i=0; i<n; i++){
        if(i!=node && mat[i][node]==1 && color[i]==c){
            return false;
        }
    }
    return true;
}
bool solve(int node, vector<vector<int>>&mat,int m,int n,vector<int>&color){
      if(node==n){
          return true;
      }
      for(int i=1; i<=m; i++){
          if(isSafe(node,mat,m,n,color,i)==true){
              color[node]=i;
              if(solve(node+1,mat,m,n,color)==true){
                  return true;
              }
              color[node]=-1;
          }
      }
      return false;
}
string graphColoring(vector<vector<int>> &mat, int m) {
    int n=mat.size();
    vector<int>color(n,-1);
    if(solve(0,mat,m,n,color)==true){
        return "YES";
    }
    return "NO";
}