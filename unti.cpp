#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll t;
	cin>>t;
	float pernow;
	ll x,y;
	while(t--)
	{
		cin>>x>>y;
		pernow=(y*100)/x;
		if(pernow>=75)
			cout<<"0"<<endl;
		else
		{
		  ll days=abs(4*y - 3*x);
		  cout<<days<<endl;
		}
	}
	return 0;
}