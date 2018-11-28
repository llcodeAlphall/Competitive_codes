#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<unsigned long long int> arr(5001);
	unsigned long long int n,i,no;
	int flag=0;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>no;
		arr[no]++;
	}
	return 0;
}
