#include <bits/stdc++.h> 
vector<int> mergeKSortedArrays(vector<vector<int>>&kArrays, int k)
{
      vector<int>ans;
    priority_queue<int>pq;
    for(int i=0; i<k; i++){
        for(int j=0; j<kArrays[i].size(); j++){
            pq.push(kArrays[i][j]);
        }
    }
    while(pq.empty()==false){
       ans.push_back(pq.top());
       pq.pop();
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
