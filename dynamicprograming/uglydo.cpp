#include<bits/stdc++.h>
using namespace std;
int getugly(int n)
{
	int dp[n];
	int i2=0,i3=0,i5=0;
	int c2=2;
	int c3=3;
	int c5=5;
	int nextugly=1;
	dp[0]=1;
    for(int i=1;i<n;i++)
    {
        nextugly=min(c2,min(c3,c5));
        dp[i]=nextugly;
        if(nextugly==c2)
        {
        	i2++;
        	c2=dp[i2]*2;
        }
        if(nextugly==c3)
        {
        	i3++;
        	c3=dp[i3]*3;
        }
        if(nextugly==c5)
        {
        	i5++;
        	c5=dp[i5]*5;
        }
    }
    return nextugly;
}
int main()
{
	int n;
	cin>>n;
	int ans=getugly(n);
	cout<<n<<"th ugly is : "<<ans<<endl;
}