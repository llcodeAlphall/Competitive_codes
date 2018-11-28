#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,no1,no2,no3;
	cin>>n;
	int dif,min,pos1,pos2;
	min=INT_MAX;
	int i;
	vector<int> arr(n);
	for(i=1;i<=n;i++)
		cin>>arr[i-1];
	for(i=0;i<n-1;i++)
		{
			dif=abs(arr[i]-arr[i+1]);
			if(min>dif)
				{
					min=dif;
					pos1=i+1;
					pos2=i+2;
				}
		}
	dif=abs(arr[n-1]-arr[0]);
	if(min>dif)	
		{
			min=dif;
			pos1=n;pos2=1;
		}
	cout<<pos1<<" "<<pos2;
	return 0;
}
