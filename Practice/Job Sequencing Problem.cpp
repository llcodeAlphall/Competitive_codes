#include <bits/stdc++.h>
using namespace std;
struct Job
{
	char id;
	int dead;
	int profit;
};
bool func(Job i, Job j)
{
	return i.profit>j.profit;
}
void printJobScheduling(Job arr[],int n)
{
	sort(arr,arr+n,func);
	int i,j;
	bool slot[n]={false};
	int result[n];
	for(i=0;i<n;i++)
	{
		for(j=min(n,arr[i].dead)-1;j>=0;j-- )
			{
				if(slot[j]==false)
				{
					slot[j]=true;
					result[j]=i;
					break;
				}
			}
	}
	for(i=0;i<n;i++)
	{
		if(slot[i])
			cout<<arr[result[i]].id<<" ";
	}
}
int main()
{
   	Job arr[] = { {'a', 2, 100}, {'b', 1, 19}, {'c', 2, 27},
    			  {'d', 1, 25} , {'e', 3, 15}};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Following is maximum profit sequence of jobs\n";
    printJobScheduling(arr, n);
    
    return 0;
}
