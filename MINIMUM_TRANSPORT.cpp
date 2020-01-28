#include<bits/stdc++.h>
using namespace std;
// TYM COMPLEXITY O(log(v)*n)
int max_fun(int boxes[],int n){
	int s=boxes[0];
	for(int i=1;i<n;i++){
		s=max(s,boxes[i]);
	}
	return s;
}

int sum_of(int boxes[],int n){
	int h=0;
	for(int i=0;i<n;i++){
		h+=boxes[i];
	}
	return h;
}

int check_capacity(int boxes[],int n,int k,int mid){
	int no_of_rides=1,d=0;
	
	for(int i=0;i<n;i++)
	{
		if(d+boxes[i]<=mid){
			d+=boxes[i];
		}
		else{
			no_of_rides++;
			d=boxes[i];
		}
	}
	return no_of_rides;
}




int bin_Search(int boxes[],int n,int k){
	int ans=0,left=max_fun(boxes,n),right=sum_of(boxes,n);
	while(left<=right){
		int mid=(left+right)/2;
		
		if(check_capacity(boxes,n,k,mid)>k){
			left=mid+1;
		}
		if(check_capacity(boxes,n,k,mid)<=k){
			ans=mid;
			right=mid-1;
		}
		
	}
	return ans;
}







int main(){
int n,k;
cin>>n>>k;
int boxes[n];
for(int i=0;i<n;i++){
	cin>>boxes[i];
}
cout<<bin_Search(boxes,n,k);
	
}
