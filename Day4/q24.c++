#include <bits/stdc++.h> 
using namespace std;
int uniqueSubstrings(string s)
{
  map<char,int>mp;
  int j=0;
  int maxi=0;
  for(int i=0; i<s.length(); i++){
      mp[s[i]]++;
      while(mp[s[i]]>1){
          mp[s[j]]--;
          if (mp[s[j]] == 0) {
            mp.erase(s[j]);
          }
          j++;
      }
      maxi=max(maxi,i-j+1);
  }
  return maxi;
}