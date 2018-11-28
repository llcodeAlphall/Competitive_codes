#include<bits/stdc++.h>
using namespace std;
#define ui unsigned int
#define ll long long
#define ull unsigned long long
#define db double
#define f(i,a,b) for(i=a;i<=b;i++)
#define sui(i) scanf("%u",&i)
char arr[10][10]={};
string str[11];
int k=0;
bool func(int r,int n)
{
	if(r==9 && n==0)
		return true;
	int i,c;c=0;	
	for(i=0;i<10;i++)
	{
		if(arr[r][i]=='-')
			c++;
	}
	if()
	
}

int main()
{	
	int i,j;
	for(i=0;i<10;i++)
		for(j=0;j<10;j++)
			cin>>arr[i][j];
	string mtr="";
	cin>>mtr;
	mtr+=';';
	for(i=0;i<11;i++)	
		str[i]="";
	for(i=0;i<mtr.size();i++)
	{
		if(mtr[i]==';')
		{
			mtr+='\0';
			k++;
			continue;
		}
		str[k]+=mtr[i];		
	}
	func(0,k-1);
	return 0;
}
