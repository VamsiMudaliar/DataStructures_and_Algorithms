#include<bits/stdc++.h>
#define MOD 10000007
#define ll long long int

using namespace std;

ll fme( ll n,ll m)
{
	//ll ans=1;
	if(m==0){
		return 1;
	}
	if(m==1)
	{
		return n;
	}
	else{
		if(m%2==0){
			return fme((n*n)%MOD,m/2);
		}
		else{
			return n*fme(n,m-1);
		}
	}
	
	/*while(m>=1)	{
	if(m%2==0){
		n= ( n*n ) % MOD;
		m/=2;
	}
	else{
		ans=(ans*n)% MOD;
		m--;
	}
	}*/
}
int main()
{
	ll n,m;
	cin>>n>>m;
	cout<<fme(n,m);	
}
