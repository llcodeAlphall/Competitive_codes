#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,a,b,c;
	cin>>n;
	int count=0;
	for(c=1;c<=n;c++)
		{
			for(b=1;b<c;b++)
				{
					a=sqrt(c*c - b*b);
					if( (a*a + b*b) ==c*c)
						count++;
				}
		}
	cout<<count/2;
	return 0;
}
