#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> pairSum(vector<int> &arr, int s){
     sort(arr.begin(),arr.end());
     int l=0;
     int h=arr.size()-1;
     vector<vector<int>>ans;
    //  while(l<=h){
    //      int sum=arr[l]+arr[h];
    //      if(sum==s){
    //          ans.push_back({arr[l],arr[h]});
    //          l++;
    //          h--;
    //      }
    //      else if(sum<s){
    //          l++;
    //      }
    //      else{
    //          h--;
    //      }
    //  }
    int n=arr.size();
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]+arr[j]==s){
                ans.push_back({arr[i],arr[j]});
            }
        }
    }
     return ans;
}