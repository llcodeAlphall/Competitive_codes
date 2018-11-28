#include<bits/stdc++.h>
using namespace std;
#define ui unsigned int
#define ll long long
#define ull unsigned long long
#define db double
#define f(i,a,b) for(i=a;i<=b;i++)
#define sui(i) scanf("%u",&i)

int fib(int n)
{
	if(n==0)
		return 0;
	else if(n==1)
		return 1;
	return fib(n-1)+fib(n-2);	
}

int main()
{
	int n;
	cin>>n;
	cout<<fib(n);
	return 0;
}
