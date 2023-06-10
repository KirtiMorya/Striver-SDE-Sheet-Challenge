#include <bits/stdc++.h> 
void solve(int i, vector<int>num,vector<int>&ans, int sum){
    if(i==num.size()){
        ans.push_back(sum);
        return;
    }
    solve(i+1,num,ans,sum+num[i]);
    solve(i+1,num,ans,sum);
}
vector<int> subsetSum(vector<int> &num)
{
    // Write your code here.
    vector<int>ans;
    solve(0,num,ans,0);
    sort(ans.begin(),ans.end());
    return ans;
}