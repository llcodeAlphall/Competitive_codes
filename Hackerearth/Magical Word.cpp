#include<bits/stdc++.h>
using namespace std;
#define ui unsigned int
#define ll long long
#define ull unsigned long long
#define db double
#define f(i,a,b) for(i=a;i<=b;i++)
#define sui(i) scanf("%u",&i)

int arr[]={67,71,73,79,83,89,97,101,103,107,109,113};
int main()
{
	ui t,l,i,j;
	sui(t);
	char ch;
	int d,min,pos;
	while(t>0)
	{
		t--;
		sui(l);
		for(i=0;i<l;i++)
		{
			cin>>ch;
			d=0;
			min=INT_MAX;
			pos=0;
			for(j=0;j<12;j++)
				{
					d=abs(int(ch)-arr[j]);
					if(d<min)
						{
							min=d;
							pos=j;
						}
				}
			printf("%c",char(arr[pos]));
		
		}
		cout<<endl;
	}	
	return 0;
}
