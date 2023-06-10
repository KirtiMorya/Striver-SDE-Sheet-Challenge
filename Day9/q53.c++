#include <bits/stdc++.h> 
using namespace std;
bool isvalid(int i, int j, string &s){
    while(i<=j){
        if(s[i]!=s[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}

void solve(int i, string &s,vector<vector<string>>&ans, vector<string>&vt){
    if(i==s.length()){
        ans.push_back(vt);
        return;
    }
    for(int j=i; j<s.length(); j++){
        if(isvalid(i,j,s)==true){
            vt.push_back(s.substr(i,j-i+1));
            solve(j+1,s,ans,vt);
            vt.pop_back();
        }
    }
}
vector<vector<string>> partition(string &s) 
{
    vector<vector<string>>ans;
    vector<string>vt;
    solve(0,s,ans,vt);
    return ans;
}