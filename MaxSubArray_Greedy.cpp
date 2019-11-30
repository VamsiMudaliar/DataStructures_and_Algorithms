#include<bits/stdc++.h>
#define N 10000
using namespace std;

int arr[10000];
void max_sub_array(int n)
{
	int ans=arr[0],sum=-999;
	
	for(int i=0;i<n;i++)
	{
		sum+=arr[i];
		if(sum<0)
		{
			sum=0;
		}
		if(sum>ans)
		{
			ans=sum;
		}
			
	}
	cout<<"MAx Sub Array Value :"<<ans;
	
}



int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	max_sub_array(n);
	
	
}
