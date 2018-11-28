#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[159];
	int size;
	int t,n,i,carry,j,temp;
	cin>>t;
	while(t>0)
	{
		t--;
		for(i=0;i<159;i++)
			arr[i]=0;
		arr[0]=1;
		size=1;
		cin>>n;
		if(n==1||n==0)
			cout<<1;
		else
		{
			for(i=2;i<=n;i++)
			{
				carry=0;
				for(j=0;j<size;j++)
				{					
					temp=arr[j]*i+carry;
					arr[j]=temp%10;
					carry=temp/10;					
				}
				while(carry!=0)
				{
					arr[size]=carry%10;
					carry/=10;
					size++;
				}		
			}
			for(i=size-1;i>=0;i--)
				cout<<arr[i];
			cout<<endl;
		}
		
	}
	
	
	return 0;
}
