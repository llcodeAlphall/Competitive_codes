#include<bits/stdc++.h>
using namespace std;
#define ui unsigned int
#define ll long long
#define ull unsigned long long
#define db double
#define f(i,a,b) for(i=a;i<=b;i++)
#define sui(i) scanf("%u",&i)
int func(string str,string mtr)
{
	return (str.size()<mtr.size());
}
int main()
{
	string s1,s2;
	s1="abc";
	s2=s1.substr(0,1);
	cout<<s2;
	return 0;
}
