#include<bits/stdc++.h>
using namespace std;
int findmaxcontieven(int a[],int n)
{
	int ans=0,curcount=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]%2==0)
			curcount++;
		else
		{
			ans=max(ans,curcount);
			curcount=0;
		}
	}
	ans=max(ans,curcount);
	return ans;
}
int main()
{
	int n;
	cin>>n;
	int a[n+1];
	for(int i=0;i<n;i++)
		cin>>a[i];
	int ans=findmaxcontieven(a,n);
	cout<<"max length in contiguos even elements in arrays is ="<<ans<<endl;
}