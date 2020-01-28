#include<bits/stdc++.h>
#define n 1000000000

using namespace std;


bool prime[n];

void sieveOfEratho(int l,int r)
{
	for(int i=0;i<100;i++)
{
	prime[i]=true;
}

	for(int i=2;i*i<=r;i++)
	{
		if(prime[i])
		{
			for(int j=i*i;j<=r;j+=i)
			{
				prime[j]=false;
			}
		}
	}
	for(int i=l;i<=r;i++)
	{
		if(prime[i])
			cout<<i<<endl;
	}
	
	
	
	
}
int main()
{
	int t;
	cin>>t;
	while(t--){
		int l,r;
	cin>>l>>r;
	sieveOfEratho(l,r);
	}
}
