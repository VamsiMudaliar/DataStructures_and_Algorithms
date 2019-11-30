#include<bits/stdc++.h>
#define N 100
using namespace std;

int a[N],b[N],s[N]; 
//O(1*m)

void rangeUpdateTrick(int x,int y,int val)
{
	b[x]+=val;
	b[y+1]-=val;
}
void finalArray(int n)
{
	int i;
	s[0]=b[0];
	a[0]+=s[0];
	for(int i=1;i<=n;i++)
	{
 	s[i]=s[i-1]+b[i];
	a[i]+=s[i];
	}
}

int main()
{
	int x,y,n,key;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cin>>x>>y>>key;
	rangeUpdateTrick(x,y,key);
	finalArray(n);
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
