#include<bits/stdc++.h>
using namespace std;
#define ui unsigned int
#define ll long long
#define ull unsigned long long
#define db double
#define f(i,a,b) for(i=a;i<=b;i++)
#define sui(i) scanf("%u",&i)

int main()
{
	ull n,q,i;
	int no;
	cin>>n>>q;
	ull arr[n];
	for(i=0;i<n;i++)
		cin>>arr[i];
	for(i=0;i<q;i++)
		{
			cin>>no;
			if(no==0)
				{
					cin>>no>>no;
					if(arr[no-1]==0)
						cout<<"EVEN\n";
					else
						cout<<"ODD\n";
				}
			else
				{
					cin>>no;
					if(arr[no-1]==1)
						arr[no-1]=0;
					else
						arr[no-1]=1;
				}
		}
	return 0;
}
