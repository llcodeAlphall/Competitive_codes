#include <bits/stdc++.h>
using namespace std;

int partition(int l,int r,vector <int> &arr)
{
    int i,j,pivot,temp;
    i=l;j=r+1;pivot=arr[l];
    while(i<j)
    {
        do
        {
        i++;
        }while(arr[i]<=pivot);
        do
        {
            j--;
        }while(arr[j]>pivot);    
        if(i<j)
        {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    temp=arr[l];
    arr[l]=arr[j];
    arr[j]=temp;
    return j;
}
void quickSort(int l,int r,vector <int> &arr) 
{
    int j,i;
    if(l<r)
    {
        j=partition(l,r,arr);        
        quickSort(l,j,arr);              
        quickSort(j+1,r,arr);
        bool f = true;
    	for (i=l;i<r;i++) 
		{
        	if (f) cout << " ";
        	f = false;
        	cout << arr[i];
    	}
    	cout << endl;
    }    
}
int main()
{
    int n;
    cin >> n;
    vector <int> arr(n);
    for(int i = 0; i < (int)n; ++i) 
        cin >> arr[i];
    quickSort(0,n-1,arr);
    return 0;
}
