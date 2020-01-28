#include<bits/stdc++.h>
using namespace std;

void count_bitstring(int N){
	int a[N];//last bit 1,
	int b[N];//last bit 0;
	a[0]=1;b[0]=1;
	for(int i=1;i<N;i++)
	{
		a[i]=b[i-1];
		b[i]=b[i-1]+a[i-1];
	}
	cout<<a[N-1]+b[N-1];
}
int main()
{
	int N;
	cin>>N;
	count_bitstring(N);
}
