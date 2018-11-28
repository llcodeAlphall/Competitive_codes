#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,day,no;day=1;
	cin>>n;
	int arr[8];
	int i;
	for (i=1;i<=7;i++)
		cin>>arr[i];
	
	while(n > 0)
	{
		n-=arr[day];
		if(day<7)
			day++;
		else
			day=1;		
	}
	day--;
	if(day<1)
		day=7;
	cout<<day;
	return 0;
}
