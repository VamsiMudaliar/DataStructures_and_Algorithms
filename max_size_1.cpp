#include<bits/stdc++.h>
using namespace std;

const int Nmax=10001;

bool mat[Nmax][Nmax];

int n,m,max_len[Nmax][Nmax]; 

max_size(bool mat[][Nmax],int n,int m){
	int ans=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(mat[i][j]==false)
				max_len[i][j]=0;
			else
			max_len[i][j]=min(max_len[i-1][j],min(max_len[i][j-1],max_len[i-1][j-1]))+1;
			
			ans=max(ans,max_len[i][j]);
		}
	}
	
	return ans;
	
}


int main(){
	cin>>n>>m;
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			cin>>mat[i][j];
	
	cout<<max_size(mat,n,m);
}
