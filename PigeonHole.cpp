#include<bits/stdc++.h>
using namespace std;

int freq[200]={0};
 void findNumber(int n)
{
	int curr_rem=0;
	for(int i=1;i<=n;i++)
	{
		curr_rem=(curr_rem*10+1)%n;
		if(curr_rem==0)
		{
			for(int j=1;j<=i;j++)
			{
				cout<<1;
			}
			return;
		}
	
	if(freq[curr_rem]!=0)
	{
		for(int j=1;j<=i-freq[curr_rem];j++)
		{
			cout<<1;
		}
		for(int j=1;j<=freq[curr_rem];j++)
		{
			cout<<0;
		}
		return;
	}
	freq[curr_rem]=i;
}
}




int main()
{
	
	findNumber(101);
}
