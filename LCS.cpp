#include<bits/stdc++.h>
using namespace std;

const int Nmax=100001;
int a[Nmax];
bool fr[Nmax];


int  longestCons_subarray(int n)
{
	int ans=0;
	for(int i=0;i<n;i++){
		for(int g=0;g<n;g++)
			fr[g]=false;
		
		int Min=a[0],Max=a[0];
		
		for(int j=i;j<n;j++)
		{
			if(fr[a[j]]==true)
				break;
			fr[a[j]]=true;
			Min=min(Min,a[j]);
			Max=max(Max,a[j]);
			if(j-i==Max-Min)
			{
				ans=max(ans,Max-Min+1);
			}
			
		}
			
			
	}
	return ans;
		
}


int main()
{
int n;
cin >>n;
for(int i=0;i<n;i++)
	cin>>a[i];	
cout<<longestCons_subarray(n);
	
}
