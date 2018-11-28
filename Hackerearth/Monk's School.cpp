#include<bits/stdc++.h>
using namespace std;
#define ui unsigned int
#define ll long long
#define ull unsigned long long
#define db double
#define f(i,a,b) for(i=a;i<=b;i++)
#define sui(i) scanf("%u",&i)

struct stu
{
	ull age;
	string sname;
	string tname;
};
int func1(stu a1, stu a2)
{
	return a1.tname>=a2.tname;	
}
int func2(stu a1, stu a2)
{
	if(a1.tname==a2.tname)
		return a1.age<a2.age;	
}

int main()
{
	ull n,m,i;
	cin>>n>>m;	
	string name[n];
	
	for(i=0;i<n;i++)
		cin>>name[i];
	
	stu arr[10000+10];
	for(i=0;i<m;i++)
		cin>>arr[i].tname>>arr[i].sname>>arr[i].age;
		
	sort(arr,arr+m,func1);
	sort(arr,arr+m,func2);
	
	//display	
	cout<<arr[0].tname<<endl;
	for(i=0;i<m;i++)
	{		
		cout<<arr[i].sname<<" "<<arr[i].age<<endl;
		if((arr[i].tname != arr[i+1].tname) && (i+1<m))
			cout<<arr[i+1].tname<<endl;
	}	
	return 0;
}
