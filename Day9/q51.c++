void solve(int i, int n , vector<int>&arr, vector<int>&res, vector<vector<int>>&ans,int k,int sum){
   if(i==arr.size() && sum==k){
       ans.push_back(res);
   }
   if(i==n){
       return;
   }
       
       solve(i+1,n,arr,res,ans,k,sum);
         res.push_back(arr[i]);
       solve(i+1,n,arr,res,ans,k,sum+arr[i]);
        res.pop_back();
  
}
vector<vector<int>> findSubsetsThatSumToK(vector<int> arr, int n, int k)
{
  vector<vector<int>>ans;
    vector<int>res;
    solve(0,n,arr,res,ans,k,0);
    return ans;  
}