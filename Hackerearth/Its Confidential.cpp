#include<bits/stdc++.h>
using namespace std;
#define ui unsigned int
#define ll long long
#define ull unsigned long long
#define db double
#define f(i,a,b) for(i=a;i<=b;i++)
#define sui(i) scanf("%u",&i)

void encrypt(string str)
{
	ui n=str.size();
	if(n==0)	
		return;
	else if(n==1)
		{
			cout<<str[0];
			return;
		}
	else if(n==2)
		{
			cout<<str;
			return;
		}
	else if(n==3)
		{
			cout<<str[1]<<str[0]<<str[2];
			return;
		}
	else
	{
		if(n%2!=0)
		{
			cout<<str[n/2];
			encrypt(str.substr(0,n/2));
			encrypt(str.substr(n/2+1,n));
		}
		else
		{
			cout<<str[n/2-1];
			encrypt(str.substr(0,n/2-1));
			encrypt(str.substr(n/2,n));
		}
	}
}

int main()
{
	ui t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		string str;
		cin>>str;
		encrypt(str);
		cout<<endl;
	}
	return 0;
}
