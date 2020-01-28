#include<bits/stdc++.h>
#define vampire_mode ios::sync_with_stdio(false);cin.tie(NULL)
using namespace std;
int main(){
	int n;
	cin >> n;
	
	int m;
	cin >>m;
	int a[m];
	for(int i=0;i<m;i++){
		cin >> a[i];
	}
	int p[m];
	for(int i=0;i<m;i++){
		cin >> p[i];
	}
	int s=0;
	for(int i=0;i<m;i++){
		s+=((n- max(a[i],p[i])+1) + min(a[i],p[i])-1);
	}
	cout<<(n*(n+1)/2)<<endl;
	
	
	
	
	
	
	
	
}
