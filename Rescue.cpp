#include<bits/stdc++.h>
using namespace std;

int main()
{
int t;
cin >> t;
while(t--){
int n;
cin>>n;
int d[n];
map<int,int> hash;
map<int,int>::iterator itr;
for(int i=0;i<n;i++){

	cin>>d[i];
	hash[d[i]]++;
}
int max_occur=INT_MIN,max_index=-1;

for(itr=hash.begin();itr!=hash.end();itr++){
	if(itr->second >max_occur){
		max_occur=itr->second;
		max_index=itr->first;
	}
}
int c=0;
for(int i=0;i<n;i++)
{
	if(d[i]!=max_index){
		c++;
	}
	
}
cout<<c<<endl;

}



 

}
