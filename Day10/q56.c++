#include<bits/stdc++.h>
using namespace std;
bool issafe(int r,int c, vector<vector<int>>ans,int n){
    int dr=r;
    int dc=c;
    while(r>=0 && c>=0){
        if(ans[r][c]==1){
            return false;
        } 
        c--;
        r--;
    }
    r=dr;
    c=dc;
    while(c>=0){
        if(ans[r][c]==1){
            return false;
        }
        c--;
    }
    r=dr;
    c=dc;
    while(r<n && c>=0){
         if(ans[r][c]==1){
             return false;
         }
         r++;
         c--;
    }
    return true;
   
}

void solve(int col, vector<vector<int>>&mat, vector<vector<int>>&ans, int n){
    if(col==n){
        vector<int>temp;
        for(int i=0; i<(int)ans.size(); i++){
            for(int j=0; j<(int)ans[i].size(); j++){
               temp.push_back(ans[i][j]);
            }
        }
        mat.push_back(temp);
        return;
    }
    for(int i=0; i<n; i++){
        if(issafe(i,col,ans,n)==true){
            ans[i][col]=1;
            solve(col+1,mat,ans,n);
            ans[i][col]=0;
        }
    }
}
vector<vector<int>> solveNQueens(int n) {
    // Write your code here.
    vector<vector<int>>ans(n,vector<int>(n,0));
    vector<vector<int>>mat;
    solve(0,mat,ans,n);
    return mat;
}
