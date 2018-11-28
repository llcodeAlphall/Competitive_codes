#include<bits/stdc++.h>
using namespace std;
int main()
{
	unsigned long long int p25,p50,p100,n;p25=p50=p100=0;
	cin>>n;
	int p;
	while(n--)
	{
		cin>>p;
		if(p==25)
			p25++;
		else if(p==50)
			{
				if(p25>0)
					p25--;
				else
					{
						cout<<"NO";
						return 0;
					}
				p50++;
			}
		else
			{
				if(p25>0)
				{
					if(p50>0)
						{
							p50--;
							p25--;
						}
					else if(p25>2)
						p25-=3;
					else
						{
							cout<<"NO";
							return 0;
						}
				}
				else
					{
						cout<<"NO";
						return 0;
					}
			}
	}
	cout<<"YES";
	return 0;
}
