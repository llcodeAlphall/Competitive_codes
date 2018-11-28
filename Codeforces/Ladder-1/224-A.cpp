#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a1,a2,a3;
	cin>>a1>>a2>>a3;
	int ans;
	ans=4*(int(sqrt((a1*a2)/a3)) + int(sqrt((a2*a3)/a1)) + int(sqrt((a1*a3)/a2)));
	cout<<ans;
	return 0;
}
