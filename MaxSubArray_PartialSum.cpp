#include<bits/stdc++.h>
#define N 200
using namespace std;

int arr[N];
void MaxSumSubArray(int n)
{
	int ps[n],left=0,right=0;
	ps[0]=arr[0];
	for(int i=1;i<n;i++)
	{
		ps[i]=ps[i-1]+arr[i];		
	}
	int min=0,ans=arr[0];
	for(int i=0;i<n;i++)
	{
		if(ps[i]-min>ans)
		{
			ans=ps[i]-min;
			right=i;	
		}
		if(min>ps[i]){
			min=ps[i];
			left=i;
		}
	}
	cout<<ans;
}




int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>arr[i];
	MaxSumSubArray(n);
}
