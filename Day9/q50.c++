#include <bits/stdc++.h> 
void solve(int i, int n , vector<int>arr, vector<int>res, vector<vector<int>>&ans){
//    if(i==n){
//        ans.push_back(res);
//        return;
//    }
ans.push_back(res);
   for(int j=i; j<n; j++){
       if(i!=j && arr[j]==arr[j-1]){
           continue;
       }
       res.push_back(arr[j]);
       solve(j+1,n,arr,res,ans);
       res.pop_back();
   }
}
vector<vector<int>> uniqueSubsets(int n, vector<int> &arr)
{
    // Write your code here.
    vector<vector<int>>ans;
    vector<int>res;
    sort(arr.begin(),arr.end());
    solve(0,n,arr,res,ans);
    return ans;
}