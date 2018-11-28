#include<bits/stdc++.h>
using namespace std;
int main()
{
	long int n,a,b,x,y,no,i;x=0;y=0;
	cin>>n;
	for(i=0;i<n;i++)
		{
			cin>>no;
			if(no==100)
				x++;
			else
				y++;
		}

	for(a=0;a<=n;a++)
		{
			for(b=0;b<=n;b++)
				{
					if((2*a + 4*b)==(x+2*y))
						{
							
							if(a>=0 && b>=0 && (x-a)>=0 && (y-b)>=0 &&(a+b)>0 && (x+y-a-b)>0)
							{
								cout<<"YES";
								return 0;
							}
							
						}
				}
		}
	cout<<"NO";
	return 0;
}
