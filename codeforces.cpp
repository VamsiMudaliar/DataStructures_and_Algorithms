#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int z=k/2,res=(n/k)*k;
        (n%k>=z)?cout<<res+z<<endl:cout<<res+n%k<<endl;
    }
}
