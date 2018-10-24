//to print all jumping numbers till n jumping mmeans adjacency of diff 1 n may be till 10^9 with 100 test cases it is done by bfs.
#include<bits/stdc++.h>
using namespace std;
int reverse(int n)
{
    int rev=0;
     while (n != 0)
   {
      rev = rev * 10;
      rev = rev + n%10;
      n = n/10;
   }
   return rev;
}
int noofdigits(int i)
{
    int res=0;
    while(i!=0)
    {
        i=i/10;
        res++;
    }
    return res;
}
int check(int i)
{
    int pre=i%10;
    int flag=1;
    while(noofdigits(i)!=1)
    {
        i=i/10;
        int k=i%10;
        if(abs(k-pre)==1)
        {
            flag=1;
        }
        else
        {
            flag=0;
            break;
        }
        pre=k;
    }
    if(flag==1)
    return 1;
    else
    return 0;
}

int main()
 {
	int a[1000001];
	    bool visited[1000001];
	    for(int i=0;i<1000001;i++)
	    visited[i]=false;
	    int k=0;
	    for(int i=0;i<=1000001;i++)
	    {
	        if(visited[i]==true)
	        continue;
	        else
	        {
	           int d=noofdigits(i);
	           if(d==1)
	           {
	             a[k++]=i;
	             visited[i]=true;
	           }
	           else if(d!=1)
	           {
	              int res=check(i);
	              if(res==1)
	              {
	                a[k++]=i;
	                visited[i]=true;
	                int temp=reverse(i);
	                if(temp<=1000001&&visited[temp]==false)
	                {
	                   a[k++]=temp; 
	                   visited[temp]=true;
	                }
	              }
	           }
	        }
	    }
	    sort(a,a+k);
	    int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int i=0;
	    while(a[i]<=n)
	    {
	        cout<<a[i]<<" ";
	        i++;
	    }
	    cout<<endl;
	}
	return 0;
}