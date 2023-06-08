#include <bits/stdc++.h>
using namespace std;
vector<int> majorityElementII(vector<int> &arr)
{
    // Write your code here.
    int val1=-1,val2=-1,count1=0,count2=0;
    for(int i=0; i<arr.size(); i++){
        if(count1==0 && val2!=arr[i]){
            val1=arr[i];
            count1=1;

        }
       else if(count2==0 && val1!=arr[i]){
            val2=arr[i];
            count2=1;
        }
       else if(val1==arr[i]){
            count1++;
        }
       else  if(val2==arr[i]){
            count2++;
        }
        else {
            count1--;
            count2--;
        }
    }
    int c1=0;
    int m=(arr.size()/3)+1;
    int c2=0;
    for(int i=0; i<arr.size(); i++){
       if(arr[i]==val1){
           c1++;
       }
       if(arr[i]==val2){
          c2++;
       }
    }
    vector<int>vt;
    if(c1>=m){
        vt.push_back(val1);
    }
    if(c2>=m){
        vt.push_back(val2);
    }
    return vt;

}