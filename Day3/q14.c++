//modular exponentuation
#include <bits/stdc++.h>

int modularExponentiation(int x, int n, int m) {

	long long res=1;
	long long X=(long long)x;
	long long M=(long long)m;
	while(n){
		if(n%2){
			res=res*X;
			n-=1;
		}
		else{
			X=X*X;
			X=(X+M)%M;
			n/=2;
		}
		res=(res+M)%M;
	}
	return res;
}
