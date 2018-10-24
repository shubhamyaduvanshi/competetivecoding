#include<bits/stdc++.h>
using namespace std;
#define ll long long
int findmin(int a[],int start,int end)
{
	int m=INT_MIN, in;
    for(int i=start;i<=end;i++) 
    {
    	if(a[i]>m)
    	{
    		m=a[i];
    		in=i;
    	}
    }
    if(in==start||in==end)
    	return 1;
    int leftin=findmin(a,start,in-1);
    int rightin=findmin(a,in+1,end);
    if(leftin<=rightin)
    	return 1+leftin;
    else return 1+rightin;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n+1];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		int ans=findmin(a,0,n-1);
		cout<<ans<<endl;
	}
}