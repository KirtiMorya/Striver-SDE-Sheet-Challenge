#include <bits/stdc++.h>
using namespace std;
int LongestSubsetWithZeroSum(vector < int > arr) {

unordered_map<int,int>mp;
int n=arr.size();
int maxi=0,sum=0;
mp[sum]=-1;
for(int i=0; i<n; i++){
    sum+=arr[i];
      if(mp.find(sum)!=mp.end()){
        maxi=max(maxi,i-mp[sum]);
      }
      else{
        mp[sum]=i;
      }
}
return maxi;

}