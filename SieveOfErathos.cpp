#include<bits/stdc++.h>
using namespace std;


bool prime[1000];

void sieveOfEratho(int r)
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
	for(int i=2;i<=r;i++)
	{
		if(prime[i])
			cout<<i<<" ";
	}
	
	
	
	
}
int main()
{
	int r;
	cin>>r;
	sieveOfEratho(r);
	
}
