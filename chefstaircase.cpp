#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		string str;
		cin>>n>>str;
		string stack[n];
		for(int i=0;i<n;i++)
		cin>>stack[i];
	    int top=0;
	    int flag0=0,flag1=0;
	    int z=0;
	    int i;
        while(1)
        {
		  if(str=="Dee")
		  {
			for(i=0;i<n;i++)
			{
				if(stack[i][top]=='0')
				{
					flag0=1;
					flag1=0;
					break;
				}
			}
		    if(flag0==1)
			{ 
                while(stack[i].length()&&stack[i][top]=='0')
                {
                	stack[i].erase(0,1);
                }
                str="Dum";
			}
			 if(flag0==0)
			{
				cout<<"Dee"<<endl;
				break;
			}
		  }
		 
 		
 		if(str=="Dum")
 		{
 			for(i=0;i<n;i++)
 			{
 				if(stack[i][top]=='1')
 				{
 					flag1=1;
 					flag0=0;
 					break;
 				}
 			}
 			
 		   if(flag1==1)
			{ 
                while(stack[i].length()&&stack[i][top]=='1')
                {
                	stack[i].erase(0,1);
                }
                str="Dee";
			}
			if(flag1==0)
 			{
 				cout<<"Dum"<<endl;
 				//z=1;
 				break;
 			}
 		}

 	  }
	}
	return 0;
}