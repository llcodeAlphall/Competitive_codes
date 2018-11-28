#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,n,l,r,minl,maxr;minl=INT_MAX;maxr=INT_MIN;
	cin>>n;
	vector<vector<int>> arr(n,vector<int>(2));
	for(i=0;i<n;i++)
		{
			cin>>l>>r;
			arr[i][0]=l;arr[i][1]=r;
			if(minl>l)
				minl=l;
			if(maxr<r)
				maxr=r;
		}
	int flag=-2;
	for(i=0;i<n;i++)
		{
			if(arr[i][0]<=minl && arr[i][1]>=maxr)
				{
					flag=i;
				}
		}
	cout<<flag+1;
	return 0;
}
