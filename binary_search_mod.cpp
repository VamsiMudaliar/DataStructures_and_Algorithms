#include<bits/stdc++.h>
using namespace std;

//this function checks if mid can be maximum sum subarray
bool check_mid(int mid,int h[],int n,int m){
	int sum=0,count=0;
	for(int i=0;i<n;i++){
		if(mid <h[i])
			return false;
		sum+=h[i];
		if(sum> mid){
			//we found one sub array
			count++;
			sum=h[i];
		}
	}
	count++;
	if(count<=m)
		return true;
	return false;
}

int bin_search(int h[],int n, int m){
	int first=1,last=0,ans=0;
	for(int i=0;i<n;i++)
		last+=h[i];
	while(first<=last){
		int mid=(first+last)/2;
		if(check_mid(mid,h,n,m)){
			ans=mid;
			last=mid-1;
		}
		else{
			first=mid+1;
		}
	}
	return ans;
}






int main()
{
	int n,m;
	cin >>n>>m;
	int h[n];
	for(int i=0;i<n;i++)
		cin >>h[i];
	cout<<bin_search(h,n,m)<<endl;
	
	
}
