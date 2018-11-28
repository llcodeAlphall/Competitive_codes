#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,no,i;
	long long int sum=0;
	cin>>n;
	for(i=0;i<n;i++)
		{
			cin>>no;sum+=no;
		}
	if(sum%n==0)
		cout<<n;
	else
		cout<<n-1;
	return 0;
}
