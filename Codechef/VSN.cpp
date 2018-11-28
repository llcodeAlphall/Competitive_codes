#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,i,no,j,flag;
	cin>>n;	
	for(i=0;i<n;i++)
		{
			cin>>no;
			if(no<=2)
				cout<<"NO"<<endl;
			else if(no==4)
				cout<<"YES"<<endl;			
			else if(no%2==0)
				cout<<"NO"<<endl;
			else
			{
				flag=0;
				for(j=2;j<=no/2;j++)	
					if(no%j==0)
						{
							flag++;
								if(flag>1)
									break;
						}
				if(flag==1)
					cout<<"YES"<<endl;
				else
					cout<<"NO"<<endl;
			}
		}
	return 0;
}
