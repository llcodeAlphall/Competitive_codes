#include<bits/stdc++.h>

using namespace std;
#define ui unsigned int
#define ll long long
#define ull unsigned long long
#define db double
#define rep(i,a,b) for(i=a;i<=b;i++)
int main()
{
	ui n,i;
	cin>>n;
	int arr[100+2];
	rep(i,0,n-1)cin>>arr[i];
	sort(arr,arr+n);
	cout<<arr[n-1]<<" ";
	rep(i,1,n-2)cout<<arr[i]<<" ";
	cout<<arr[0];
	return 0;
}
