#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,max,i,c;
	cin>>n;
	int no;
	int a[1002]={};
	for(i=0;i<n;i++)
		{
			cin>>no;
			a[no]++;
		}
	max=a[1];
	for(i=1;i<1002;i++)
		{
			if(max<a[i])	
				max=a[i];
		}
	if(max<=((n+1)/2))
		cout<<"YES";
	else
		cout<<"NO";
	
	
	return 0;
}
