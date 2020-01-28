#include<bits/stdc++.h>
#define MAX 20
using namespace std;

int dp[MAX][MAX];

int LCS(char a[],char b[],int n,int m){
	if(n==0||m==0){
		return 0;
	}
	if(a[n-1]==b[m-1]){
		return 1+LCS(a,b,n-1,m-1);
	}
	else{
		return max(LCS(a,b,n-1,m),LCS(a,b,n,m-1));
	}	
}
void LCS_nemo(char a[],char b[],int n,int m){
	
		for(int i=0;i<=n;i++)
			dp[i][0]=0;
	
		for(int j=0;j<=m;j++)
			dp[0][j]=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(a[i-1]==b[j-1]){
				dp[i][j]=1+dp[i-1][j-1];
			}
			else{
				dp[i][j]= max(dp[i-1][j],dp[i][j-1]);
			}
		}
	}
}
string LCS_String(char a[],char b[],int n,int m)
{
	if(n==0||m==0){
		return string("");
	}
	if(a[n-1]==b[m-1]){
		return LCS_String(a,b,n-1,m-1)+a[n-1];
	}
	else{
		if(dp[n-1][m]>dp[n][m-1]){
			return LCS_String(a,b,n-1,m);
		}
		else{
			return LCS_String(a,b,n,m-1);
		}
	}
	
	
}

int main(){
	int n,m;
	cin>>n>>m;
	char a[n],b[m];
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<m;i++)
		cin>>b[i];
	LCS_nemo(a,b,n,m);
	cout<<LCS_String(a,b,n,m)<<endl;
	
	return 0;
}
