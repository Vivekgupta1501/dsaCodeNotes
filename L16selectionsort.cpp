#include<bits/stdc++.h>
using namespace std;
//SELECTION SORT (USED whenever size of array is small)
int main()
{
	vector<int> arr;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int temp;
		cin>>temp;
		arr.push_back(temp);
	}
	int temp;
	for(int i=0;i<n-1;i++)
	{
		int minIndex=i;
		for(int j=i+1;j<n;j++)
		{
			if(arr[j]<arr[minIndex])
			
			{
				minIndex=j;
			}
			
		}
		swap(arr[i],arr[minIndex]);
	 } 
	 for(int i=0;i<n;i++)
	 {
	 	cout<<arr.at(i)<<" ";
	 }
	 return 0;
}
