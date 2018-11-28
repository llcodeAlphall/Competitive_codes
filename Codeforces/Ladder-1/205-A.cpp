#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,no,pos,min,i,count;count=0;
	cin>>n;
	min=INT_MAX;
	for(i=1;i<=n;i++)
	{
		cin>>no;
		if(min>no)
			{
				min=no;pos=i;
				count=1;
			}
		else if(min==no)
			count++;
	}
	if(count==1)
		cout<<pos;
	else
		cout<<"Still Rozdil";
	return 0;
}
