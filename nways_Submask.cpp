#include<bits/stdc++.h>
using namespace std;

int nways(int x,int y,int n,int m,int xobs[],int yobs[],int q){
	if(x==n &&y==m){
		return 1;
	}
	for(int i=0;i<q;i++){
		if(x==xobs[i] && y==yobs[i]){
			return 0;
		}
	}
	return nways((x&y)*y,y,n,m,xobs,yobs,q)+nways(x,(y&x)*x,n,m,xobs,yobs,q);
}




int main(){
	int n,m,q,x=0,y=0;
	cin>>n>>m>>q;
	int xobs[q],yobs[q];
	for(int i=0;i<n;i++){
		int x,y;cin>>x>>y;
		xobs[i]=x;yobs[i]=y;
	}
	cout<<nways(x,y,n,m,xobs,yobs,q)<<endl;	
}
