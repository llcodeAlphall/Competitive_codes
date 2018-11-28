#include<bits/stdc++.h>
using namespace std;
int main()
{
	int m,n,i,k;
	int min,max;min=max=0;
	cin>>n>>m;
	vector<int> arr1(m);
	for(i=0;i<m;i++)
		cin>>arr1[i];
	vector<int> arr2(arr1);
	sort(arr1.begin(),arr1.end());
	sort(arr2.begin(),arr2.end(),greater<int>());
	//max
	
	k=0;	
	for(i=0;i<n;i++)
	{
		max+=arr2[k]--;		
		sort(arr2.begin(),arr2.end(),greater<int>());
	}
	//min
	k=0;
	for(i=0;i<n;i++)
		{
			min+=arr1[k]--;
			if(arr1[k]<=0)
				k++;
		}
	cout<<max<<" "<<min;
	return 0;
}
