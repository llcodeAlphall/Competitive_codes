#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,i,j;
	cin>>n;
	vector<int> arr1(n);
	for(i=0;i<n;i++)
		cin>>arr1[i];		
	cin>>m;
	vector<int> arr2(m);
	for(i=0;i<m;i++)
		cin>>arr2[i];
	int c;c=0;	
	vector<int> arr(n*m+1);
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			if(arr2[j]%arr1[i]==0)
				arr[c++]=arr2[j]/arr1[i];
	
	int max=0;
	for(i=0;i<c;i++)
		if(max<arr[i])
			max=arr[i];
	int t=0;
	for(i=0;i<c;i++)
		if(max==arr[i])
			t++;
			
	cout<<t;
	return 0;
}
