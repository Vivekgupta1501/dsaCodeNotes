#include<iostream>
using namespace std;
bool isspossible(int arr[],int n,int m,int mid)
{
	int studentcount=1;
	int pagesum=0;
	for(int i=0;i<n;i++)
	{
		if(pagesum +arr[i]<=mid)
		{
			pagesum+=arr[i];
			
		}
		else 
		{
			studentcout++;
			if(studentcount)
		}
	}
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int s=0,sum=0;
	for(int i=0;i<n;i++)
	{
		sum+=arr[i];
	}
	int e=sum;
	int ans=-1;
	int mid=s+(e-s)/2;
	while(s<=e)
	{
		if(ispossible(arr,n,m,mid))
		{
			ans=mid;
			e=mid-1;
		}
		else
		{
			s=mid+1;
		}
		mid=s+(e-s)/2;
	}
	cout<<ans;
	return 0;
}
