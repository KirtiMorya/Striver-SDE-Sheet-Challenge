#include <bits/stdc++.h> 
using namespace std;
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/

vector<vector<int>> mergeIntervals(vector<vector<int>> &intv)
{
    // Write your code here.
    int n=intv.size();
    vector<vector<int>>ans;
    sort(intv.begin(),intv.end());
    ans.push_back({intv[0][0],intv[0][1]});
    for(int i=1; i<n; i++){
        int p1=ans.back()[0];
        int p2=ans.back()[1];
        int c1=intv[i][0];
        int c2=intv[i][1];
        if(p2>=c1){
            if(p2<=c2){
                ans.pop_back();
                ans.push_back({p1,c2});
            }
            else{
                continue;
            }
        }
        else{
            ans.push_back({c1,c2});
        }
    }
    return ans;
}
