#include<bits/stdc++.h>
using namespace std;
//O(1*m)
int AnswerQueries(int a[],int x,int y,int n)
{
	int partial_sum[n];
	partial_sum[0]=a[0];
	for(int i=1;i<n;i++)
	{
		partial_sum[i]=partial_sum[i-1]+a[i];
	}
	return partial_sum[y]-partial_sum[x-1];
}

int main()
{
	int t;
	cin>>t;
	while(t--)	{
		int x,y,n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		cin>>x>>y;
		cout<<	AnswerQueries(arr,x,y,n);
	}	
}
