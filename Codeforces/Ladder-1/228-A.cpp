#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	set<int> x;
	x.insert({a,b,c,d});
	cout<<4-x.size();
	return 0;
}
