#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int start=0;
	int end=n;
	int mid=start +(end-start)/2;
	while(start<end)
	{
		if(arr[mid]<arr[mid+1])
		{
			start=mid+1;
		}
		else
		{
			end=mid;
		}
		mid= start + (end-start)/2;
	}
	return start;
}
