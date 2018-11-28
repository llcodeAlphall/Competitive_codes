#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,no1,no2,i,j;
	cin>>n;
	vector<pair<int,int>> arr(n);
	int count;count=0;
	for(i=0;i<n;i++)
	{
		cin>>no1>>no2;
		arr[i]=make_pair(no1,no2);
	}
	int a,b,flag1,flag2,flag3,flag4;
	
	for(i=0;i<n;i++)
	{
		a=arr[i].first;
		b=arr[i].second;		
		flag1=flag2=flag3=flag4=0;
				
		for(j=0;j<n;j++)
		{
			if(a==arr[j].first)
				{
					if(b > arr[j].second)
						flag1++;
					if(b < arr[j].second)
						flag2++;
				}
			if(b==arr[j].second)
				{
					if(a<arr[j].first)
						flag3++;
					if(a>arr[j].first)
						flag4++;
				}
			if(flag1>0 && flag2>0 && flag3>0 && flag4>0)
				{
					count++;
					break;
				}
		}
	}
	cout<<count;
	return 0;
}
