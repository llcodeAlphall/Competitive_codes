#include<bits/stdc++.h>
#include<string>
using namespace std;
#define ui unsigned int
#define ll long long
#define ull unsigned long long
#define db double

ull fact(ull x)
{
	ull f,i;f=1;
	for(i=1;i<=x;i++)
		f*=i;
	return f;
}
int main()
{
	string str1,str2;str1=str2="";
	cin>>str1>>str2;
	int i,j,a,b,c,d,e;a=b=c=d=e=0;
	
	for(i=0;i<str1.size();i++)
		if(str1[i]=='+')
			a++;
	
	b=str1.size()-a;
	
	for(i=0;i<str2.size();i++)
	{
		if(str2[i]=='+')
			c++;
		else if (str2[i]=='-')
			d++;
		else
			e++;
	}
	
	int diff;
	diff = (a-b) - (c-d);
	db ans;ans=0.00;
	for(i=0;i<=e;i++)
		{
			for(j=0;j<=e;j++)
				{
					if(i-j == diff && i+j == e)
						{
							ans+=fact(e)/( fact(i)*fact(j) );
						}
				}
		}	
	
	
	ans/=pow(2,e);
	cout<<fixed;
	cout<<setprecision(9)<<ans;
	return 0;
}
