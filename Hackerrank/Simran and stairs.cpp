#include<bits/stdc++.h>
using namespace std;
#define ui unsigned int
#define ll long long
#define ull unsigned long long
#define db double
#define f(i,a,b) for(i=a;i<=b;i++)
#define sui(i) scanf("%u",&i)


int count(int n)
{
	if(n<0)
		return 0;
	else if(n==1)
		return 1;
	else if(n==2)
		return 2;
	else if(n==3)
		return 4;
	else if(n==4)
		return 7;
	else
		return count(n-1)+count(n-2)+count(n-3);
}

int main()
{
	int n;
	cin>>n;
	cout<<count(n);
	
	return 0;
}


