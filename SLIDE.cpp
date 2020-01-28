#include<bits/stdc++.h>
using namespace std;

int  fr[100];
int arr[100];

int Sliding_Window(int arr[],int n,int k){
    int counter=0,left=0,right=0;
    for(;right<n;right++){
        if(++fr[arr[right]]==1){
            counter++;
        }
        if(counter>k){
            break;
        }
            
    }
    if(counter<=k)
        return n;
        
    if(--fr[arr[right--]]==0)
        counter--;
    int ans=0;
    for(int i=1;i<n;i++){
        if(--fr[arr[i-1]]==0)
            counter--;
        while(right<n){
            if(++fr[arr[++right]]==1)
                counter++;
            
            
            if(counter>k)
                break;
        }
        if(counter<=k){
             return max(ans,n-i+1);
        }
        if(--fr[arr[right--]]==0)
            counter--;
        ans=max(ans,right-i+1);
    }
    
    return ans;
    
}





int main(){
int m,k;
cin >>m>>k;
    for(int i=0;i<m;i++){
        cin>>arr[i];
    }
    cout<<Sliding_Window(arr,m,k);
    
    
}
