#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,no,count;count=0;
	cin>>n;
	for(i=1;i<=n;i++)
		{			
			cin>>no;
			if(no%2==0)
				count++;			
		}
		if(count>n/2)
			cout<<"READY FOR BATTLE";
		else
			cout<<"NOT READY";
	return 0;
}
