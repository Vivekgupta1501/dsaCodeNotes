#include<iostream>
using namespace std;
int binarysearch(int arr[],int s,int e,int key)
{
 	int mid=s+(e-s)/2;
	 while(s<e) 				//https://bit.ly/3rEVSK7
	 {
	 	if(arr[mid]==key)
	 	{
	 		return mid;
		}
		else if(arr[mid]>key)
		{
		 	e=mid-1;
		}	
		else
		{
			s=mid+1;	
		}
		mid =s + (e-s)/2;
}

return -1;
}
int findpivot(int arr[],int size)
{
	int s=0;int e=size-1;
	int mid = s +(e-s)/2;
	while(s<e)
	{
		if(arr[mid]>=arr[0])
		{
			s=arr[mid]+1;
		}
		else
		{
			e=mid;
		}
		mid = s + (e-s)/2;
	}
	return s;
}

void search(int arr[],int key,int size)
{
	int pivot=findpivot(arr,size);
	int ans=-1;
	if(arr[pivot]<=key && arr[size-1] >= key )
	{
		ans= binarysearch(arr,pivot,size-1,key);
	}
	else
	{
		ans=binarysearch(arr,0,pivot-1,key);
	}
	if(ans==-1)
	{
		cout<<"elment not found"<<endl;;
	}
	else
	{
		cout<<"Elment found at index : "<<ans<<endl;
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
	int key;
	cin>>key;
	search(arr,key,n);
	return 0;
	
}
