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
	set<pair<int,int>> a;
	a.insert(make_pair(9,8));
	a.insert(make_pair(9,7));
	a.insert(make_pair(8,9));
	cout<<a.size();
	return 0;
}

