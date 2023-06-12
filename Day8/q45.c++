#include <bits/stdc++.h> 
static bool comp(vector<int>a, vector<int>b){
    return a[1]>b[1];
}
int jobScheduling(vector<vector<int>> &jobs)
{
    // Write your code here
    int n=jobs.size();
    sort(jobs.begin(),jobs.end(),comp);
    int maxi=-1;
    for(int i=0; i<n; i++){
        maxi=max(jobs[i][0],maxi);
    }
    vector<int>slot(maxi+1,-1);
    int profit=0;
    for(int i=0; i<n; i++){
        int val=jobs[i][0];
        for(int j=val; j>0; j--){
            if(slot[j]==-1){
                slot[j]=i;
                profit+=jobs[i][1];
                break;
            }
        }
    }
    return profit;
    
}
