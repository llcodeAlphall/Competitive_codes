#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,pos;
	cin>>n>>pos;
	n=(n+1)/2;
	if(pos<=n)
		cout<<pos*2-1;
	else
		cout<<(pos-n)*2;
	return 0;
}
