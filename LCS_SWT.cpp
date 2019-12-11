#include<bits/stdc++.h>
using namespace std;

const int Nmax=10001;

int a[Nmax],fr[Nmax];
int fun(int a[],int n,int k)
{
	int i=0,ctr=0,ans=0;
	for(i=0;i<n;i++){
		if(++fr[a[i]]==1)
			ctr++;
		if(ctr>k)break;
	}
	if(ctr<=k)
	 return n;

		if(--fr[a[i]]==0)
			ctr--;
		i--;
		ans=i+1;
	for(int left=1;left<n;left++)
	{
		if(--fr[a[left-1]]==0)
			ctr--;
			
		while( i < n)
		{
			i++;
			if(++fr[a[i]]==1)
				ctr++;
			if(ctr>k)
				i--;
				break;
		}
		if(ctr<=k)
			return max(ans,n-left);
		if(--fr[a[i]]==0){
			ctr--;
		}
		i--;
			ans=max(ans,i-left);
						
	}
	return ans;


}

int main()
{
	int n,k,ans=0,ctr=0,i,right=0;
	cin >>n>>k;
	for(i=0;i<n;i++)
		cin >> a[i];
cout<<	fun(a,n,k);	
	
}
