#include<bits/stdc++.h>
using namespace std;

bool createsubSeq(int notes[],int len,int bin,int num){
	int sum=0;
	for(int i=0;i<len;i++)
	{
		if(bin&(1<<i))
		{
			sum+=notes[i];
		}		
	}
	if(sum==num){
		return true;	
	}
	return false;	
}

int main()
{
	int n,m,flag=0,t;
	cin>>t;
	while(t--){
	cin>>n>>m;
	int notes[n];
	for(int i=0;i<n;i++)
		cin>>notes[i];
	int range=1<<n;

for(int i=1;i<range;i++)
{
	if(createsubSeq(notes,n,i,m))
	{
		cout<<"Yes"<<endl;
	}
}

}
}
