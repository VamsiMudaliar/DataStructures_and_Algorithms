#include<bits/stdc++.h>
#define N 10000
using namespace std;

long long arr[10000];
long long max_sub_array(int arr[],int n)
{
	long long  ans=arr[0],sum=0;
	for(int i=1;i<n;i++)
	{
		sum+=arr[i];
		if(sum>ans)
		{
			ans=sum;
		}
		if(sum<0)
		{
			sum=0;
		}	
	}
	return ans;
	
}



int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<max_sub_array(n);
	
	
}
