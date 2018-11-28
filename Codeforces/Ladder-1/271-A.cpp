#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,flag,no;
	cin>>n;
	int arr[4];
	while(1)
	{
		n++;
		no=n;
		for(i=0;i<4;i++)
			{
				arr[i]=no%10;
				no/=10;				
			}
		
		if ( arr[0]==arr[1] || arr[0]==arr[2] || arr[0]==arr[3] )
				continue;
			
		if( arr[1]==arr[2] || arr[1]==arr[3] )
				continue;
			
		if( arr[2]==arr[3] )
			continue;
		
		
		break;
	}
	cout<<n;
	return 0;
}
