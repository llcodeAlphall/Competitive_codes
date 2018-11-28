#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int x,y,n;
	cin>>x>>y>>n;
	long long int arr[]={x-y,x,y,y-x,-x,-y};
	x=1000000007;	
	cout<<(arr[n%6]%x+x)%x;
	
	return 0;
}
