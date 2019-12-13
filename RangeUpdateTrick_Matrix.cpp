#include<bits/stdc++.h>

using namespace std;

const int Nmax=1000;

long int a[Nmax][Nmax],s[Nmax][Nmax]; 

void sum_submatrix(int l1,int r1,int l2,int r2,int val)
	{
		s[l1][r1]+=val;
		s[l1][r2+1]-=val;
		s[l2+1][r1]-=val;
		s[l2+1][r2+1]+=val;
		
	}

int main()
{
	int n,m,l1,r1,l2,r2,val;
	
	cin>>n>>m;
	
	cin>>l1>>r1>>l2>>r2>>val;
	sum_submatrix(l1,r1,l2,r2,val);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>a[i][j];
			s[i][j]=s[i-1][j]+s[i][j-1]+a[i][j]-s[i-1][j-1];
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
				cout<<s[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	
	
}

