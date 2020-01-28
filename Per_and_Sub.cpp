#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	char s1[n];
	char s2[m];
	for(int i=0;i<n;i++)
		cin>>s1[i];
	for(int i=0;i<m;i++)
		cin>>s2[i];
	int hash1[26],hash2[26];
	for(int i=0;i<26;i++)
	{
		hash1[i]=0;
		hash2[i]=0;	
	}
	for(int i=0;i<n;i++)
	{
		hash1[s1[i]-'a']++;
		hash2[s2[i]-'a']++;	
	}
	
	for(int i=0;i<m-n;i++)
	{
		int counter=0;
		for(int j=0;j<26;j++)
		{
			if(hash2[j]==hash1[j]){
				counter++;
			}
		}
		if(counter==n){
			cout<<"YES"<<endl;
			break;
		}
		else{
			hash2[s2[i]-'a']--;
			hash2[s2[i+n]-'a']++;
		}
		
	}
		
	
}
/*
#include <bits/stdc++.h>

const char *a = "dep";
const char *b = "encyclopedia";

int cnt_a[26];
int cnt_b[26];

int main(void)
{
    const int len_a = strlen(a);
    const int len_b = strlen(b);

    for (int i = 0; i < len_a; i++) {
            cnt_a[a[i]-'a']++;
            cnt_b[b[i]-'a']++;
    }

    for (int i = 0; i < len_b-len_a; i++) {
            if (memcmp(cnt_a, cnt_b, sizeof(cnt_a)) == 0)
                    printf("%d\n", i);
            cnt_b[b[i]-'a']--;
            cnt_b[b[i+len_a]-'a']++;
    }

    return 0;
}*/
