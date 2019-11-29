#include<bits/stdc++.h>
using namespace std;

int factors[100]={0},expo[200]={0},len;
	 
void prime_factors(int n)
{
	int d=2;
	while(n>1 && d*d<=n)
	{
		int k=0;
		while(n%d==0){
				n/=d;
				k++;
		}
		if(k>0)
		{
			len++;
			factors[len]=d;
			expo[len]=k;
			cout<<factors[len]<<" * "<<expo[len]<<"\t";
		}
		
		d++;
	}
	if(n>1){len++;factors[len]=n;expo[len]=1;cout<<factors[len]<<"*"<<expo[len];}	
	
}



int main()
{
	int n=3008;
prime_factors(n);
}
