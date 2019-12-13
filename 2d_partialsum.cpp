#include<bits/stdc++.h>

using namespace std;

const int Nmax=1000;

long int a[Nmax][Nmax],s[Nmax][Nmax]; 

long int sub_submatrix(int l1,int r1,int l2,int r2)
	return s[l2][r2]- s[l2-1][r2]+s[l1][r1-1]

int main()
{
	int n,m,l1,r1,l2,r2;
	
	cin>>n>>m;
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>a[i][j];
			s[i][j]=s[i-1][j]+s[i][j-1]+a[i][j]-s[i-1][j-1];
		}
	}
	cin>>l1>>r1>>l2>>r2;
	cout<<sum_submatrix(l1,r1,l2,r2)<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
				cout<<s[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	
	
}

