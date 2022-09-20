#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n],start=0,end=n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"elment to be searched :";
	int x;
	cin>>x;
	int mid= start + (end-start)/2 ;// this we have done so that it does not exceed maximum value of int -> 2^31-1
	while(start<=end)
	{
		if(arr[mid]==x)
		{
			return mid;
		}
		else if(arr[mid]<x)
		{
			start=mid+1;
		}
		else
		{
			end=mid-1;
		}
		mid =start+(end-start)/2;
	}
	return -1;
}
