//find out nth ugly number.
//ugly numbers are those which having 2 or 3 or 5 as only 5 prime factors or combination of these not othres.
#include<bits/stdc++.h>
using namespace std;
int greatestdivisiblepow(int num,int fact)
{
    while(num%fact==0)
    	num=num/fact;
    return num;
}
bool isugly(int i)
{
	i=greatestdivisiblepow(i,2);
	i=greatestdivisiblepow(i,3);
	i=greatestdivisiblepow(i,5);
    return(i==1)? true : false;
}
int findnthugly(int n)
{
	int num=1;
	int c=1;//as counter of ugly numbers.
	while(c<n)
	{
		num++;//as seq of num inc as 1,2,3,4,5,6,7,8,9........
		if(isugly(num))
			c++;
	}
	return num;
}
int main()
{
	int n;
	cin>>n;
	int ans=findnthugly(n);
	cout<<n<<"th ugly is "<<ans<<endl;
}