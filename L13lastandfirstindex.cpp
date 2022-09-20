#include<iostream>
using namespace std;
int firstIndex(int arr[],int size,int key)
{
	int start=0;
	int end=size-1;
	int ans=-1;
	int mid= start+(end-start)/2;
	while(start<=end)
	{
		if(arr[mid]==key)
		{
			ans=mid;
			end=mid-1;
		}
		else if(arr[mid]<key)
		{
			start=mid+1;
		}
		else
		{
			end=mid-1;
		}
		mid =start +(end-start)/2;
	}
	return ans;
}
int lastIndex(int arr[],int size,int key)
{
	int start=0;
	int end=size-1;
	int ans=-1;
	int mid= start+(end-start)/2;
	while(start<=end)
	{
		if(arr[mid]==key)
		{
			ans=mid;
			start=mid+1;
		}
		else if(arr[mid]<key)
		{
			start=mid+1;
		}
		else
		{
			end=mid-1;
		}
		mid =start +(end-start)/2;
	}
	return ans;
}
int main()
{
	int n=5;
	int arr[n]={1,2,3,3,5};
	int key;
	cout<<"Elment for which last and first index need to be found";
	cin>>key;
	int first=firstIndex(arr,n,key);
	int last=lastIndex(arr,n,key);
	cout<<"first: "<<first<<endl;
	cout<<"last: "<<last<<endl;
	return 0;
}
