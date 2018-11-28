#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,no;
	int arr[8]={};
	cin>>n;
	for(i=0;i<n;i++)
		{
			cin>>no;
			arr[no]++;
		}
	if(arr[5]>0 ||arr[7]>0)
	{
		cout<<-1;
		return 0;
	}
	string str;str="";
	int a;
	if(arr[1]>0 && arr[2]>0 && arr[4]>0)
		{
			a=min(arr[1],min(arr[2],arr[4]));
			for(i=0;i<a;i++)
				{
					str+="1 2 4\n";
					arr[1]--;arr[2]--;arr[4]--;
				}
				
		}
	
	if(arr[1]>0 && arr[2]>0 && arr[6]>0)
		{			
			a=min(arr[1],min(arr[2],arr[6]));
			for(i=0;i<a;i++)
				{
					str+="1 2 6\n";
					arr[1]--;arr[2]--;arr[6]--;
				}
		}
	
	if(arr[1]>0 && arr[3]>0 && arr[6]>0)
		{			
			a=min(arr[1],min(arr[3],arr[6]));
			for(i=0;i<a;i++)
				{
					str+="1 3 6\n";
					arr[1]--;arr[3]--;arr[6]--;
				}
		}

	for(i=1;i<=7;i++)
		if(arr[i]>0)
			{
				cout<<-1;
				return 0;
			}
	cout<<str;
	return 0;
}
