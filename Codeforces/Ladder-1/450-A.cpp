#include<bits/stdc++.h>
using namespace std;
int main()
{/*
	int n,m,no;
	cin>>n>>m;
	int i,j;
	vector<pair<int,int>> arr(n);
    for (i=0;i<n;i++)
    {
    	cin>>no;
    	arr[i]=make_pair(no,i+1);
	}
	i=0;
	
	while(arr.size()>0)
	{		
		arr[i].first-=m;
		if( arr.size() == 1 )
		{
			cout<<arr[i].second;
			break;
		}
		if(arr[i].first<=0)
		{
			arr.erase(arr.begin()+i);
		}
		else
			i++;		
		
		if(i == arr.size())
			i=0;
	}
	return 0;
	*/
	int n,m;
	cin>>n>>m;
	vector<int> arr(n);
	int i,pos;
	int max;max=-1;
	for(i=0;i<n;i++)
		{
			cin>>arr[i];
			arr[i]=ceil(arr[i]/m);
			if(max<arr[i])
			{
				max=arr[i];
				pos=i+1;
			}
		}
	cout<<pos;
}
