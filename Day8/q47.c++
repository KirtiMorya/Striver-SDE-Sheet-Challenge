#include <bits/stdc++.h> 
int findMinimumCoins(int amount) 
{
    int money[]={1,2,5,10,20,50,100,500,1000};
    int sum=0;
    int i=8;
    int count=0;
             while(amount>0){
                     if(amount>=money[i]){
                        amount-=money[i]; 
                        count++;
                     }
                     else{
                         i--;
                     }
             }
    return count;
    // Write your code here
}
