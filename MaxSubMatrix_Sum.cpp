#include<bits/stdc++.h>
using namespace std;

const int Nmax=100001;
int a[Nmax][Nmax];
long long Upsum[Nmax][Nmax];

long long maxsumsubarray(long long v[],int n)
{
	long long ans=a[1],sum=0;
	for(int i=1;i<=n;i++)
	{
		sum+=a[i];
		ans=max(ans,sum);
		if(sum<0){
			sum=0;
		}
	}
	return ans;
}



long long maxSumSubmatrix(){
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
			Upsum[i][j]=Upsum[i-1][j]+a[i][j];
			
	long long  v[Nmax]; 
	long long ans=a[1][1];
	
	for(int r1=1;r1<=n;r1++)
		for(int r2=r1;r2<=m;r2++)
			for(int i=1;i<=m;i++)
				v[i][j]=Upsum[r2][i]-Upsum[r1-1][i];
			ans=max(ans,maxsumsubarray(v,m));
	return ans;
}

int main()
{
		cin>>n>>m;
		for(int i=1;i<=n;i++)
			for(int j=1;j<=m;j++)
				cin>>a[i][j];
		cout<<maxSumSubmatrix();
	return 0;
}
