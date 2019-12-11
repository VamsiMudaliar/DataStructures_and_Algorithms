#include<bits/stdc++.h>
using namespace std;

const int Nmax=10001;

int a[Nmax],fr[Nmax];


int main()
{
	int n,k,ans=0;
	cin >>n>>k;
	for(int i=0;i<n;i++)
		cin >> a[i];
	
	for(int i=0;i<n;i++)
	{
		for(int i=0;i<n;i++)
			fr[i]=0;
		int counter=0;
		for(int j=i;j<n;j++)
		{
			if(fr[a[i]]==1)
				counter++;
			
		
			if(counter<=k)
			//update ans
			ans=max(ans,j-i);
		}
	}
	cout<<ans;
	
}
