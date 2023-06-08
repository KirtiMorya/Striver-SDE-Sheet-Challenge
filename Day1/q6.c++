#include <bits/stdc++.h> 
using namespace std;
int maximumProfit(vector<int> &p){
    // Write your code here.
    int ans=0;
    int n=p.size();
    int mini=INT_MAX;
    for(int i=0; i<n; i++){
        mini=min(p[i],mini);
        ans=max(ans,p[i]-mini);
    }
    return ans;
}