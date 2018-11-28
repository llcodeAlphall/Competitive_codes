#include<bits/stdc++.h>
using namespace std;
int main()
{
	map<int,int> m;
	m[1]=2;
	m[2]=22;
	m[3]=333;
	int a,b;
	a=5;b=99;
	m[a]=b;
	cout<<m.at(a);
	return 0;
}
