#include<bits/stdc++.h>
using namespace std;

int count_ones(int ar[],int n){
	int res=0,len=0,i=0,countone=0;
	while(i<n){
		if(ar[i]==1){
			len=0;
			while(i<n && ar[i]==1){
				i++;len++;
			}
		res+=(len*(len+1)/2);
		}
		i++;
		
	}
	return res;
}
int find_subarray(int ar[],int n,int k){
	int prod=1,res=0,start=0,end=0,countOnes=0;
	while(end<n){
		prod*=ar[end];
		
		
		/*if(prod>k){
			while(prod>k && start<=end){
			
			prod/=ar[start];
			start++;
			}	
		}*/
		if(prod%k==0){
			countOnes=0;
			//count succeding Ones 
			while(end+1<n && ar[end+1]==1){
				countOnes++;
				end++;
			}
			//add to result
			res+=(countOnes+1);
			//preceding ones have also the same result 
			while(start<=end && ar[start]==1 &&k!=1){
				res+=(countOnes + 1);
				start++;
			}
			prod/=ar[start];
			start++;
		}
		end++;
		
	}
	
	
	return res;
	
}



int main(){
	
	int n,k,count=0;
	cin >>n>>k;
	int num[n];

	for(int i=0;i<n;i++)
		cin>>num[i];
		
	if(k==1){
		cout<<count_ones(num,n)<<endl;
	}	
	else{
		cout<<find_subarray(num,n,k)<<endl;
	}
				
		
}	
		
		
		

